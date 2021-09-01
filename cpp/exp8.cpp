// #include<bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int i = 0;
//     float arr[100];
//     char ans;
//     do
//     {
//         cout<<"Enter number: ";
//         cin>>arr[i];
//         i++;

//         cout<<"Add one more?"<<endl;
//         cin>>ans;
//     } while (ans != 'n');

//     float avg;
//     for (int j = 0; j < i; j++)
//     {
//         avg += *(arr + j);
//     }
//     avg = avg/(i);

//     cout<<"Average = "<<avg;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class myClass
// {
// public:
//     myClass()
//     {
//         cout << "Object Created (Constructor called)" << endl;
//     }

//     ~myClass()
//     {
//         cout << "Object Destroyed (Destructor called)" << endl;
//     }
// };

// int main()
// {
//     myClass *obj = new myClass();
//     delete obj;
//     return 0;
// }

#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

namespace
{
    const char *WIFISSID = "lakshaychawla";
    const char *PASSWORD = "larry_1012";
    const char *TOKEN = "BBFF-QgGwd2nZE5PHY1JiszlWLxKJ9596ij";
    const char *MQTT_CLIENT_NAME = "tank_volume_reader";
    const char *VARIABLE_LABEL_1 = "distance";
    const char *VARIABLE_LABEL_2 = "humidity";
    const char *VARIABLE_LABEL_3 = "temperature";
    const char *DEVICE_LABEL = "esp32";
    const char *MQTT_BROKER = "things.ubidots.com";
    const int DHTPIN = 33;
    const int DHTTYPE = DHT11;
    const int trigPin = 16;
    const int echoPin = 17;
}

long duration;
float distance;

char payload[300];
char topic[150];

char str_sensor[10];
char str_TempSensor[10];
char str_HumSensor[10];

WiFiClient ubidots;
PubSubClient client(ubidots);
DHT dht(DHTPIN, DHTTYPE);

void callback(char *topic, byte *payload, unsigned int length)
{
    char p[length + 1];
    memcpy(p, payload, length);
    p[length] = NULL;
    String message(p);
    Serial.write(payload, length);
    Serial.println(topic);
}

void reconnect()
{

    while (!client.connected())
    {
        Serial.println("Attempting MQTT connection...");

        if (client.connect(MQTT_CLIENT_NAME, TOKEN, ""))
        {
            Serial.println("Connected");
        }
        else
        {
            Serial.print("Failed, rc=");
            Serial.print(client.state());
            Serial.println(" try again in 2 seconds");

            delay(2000);
        }
    }
}

float readDistance()
{
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = (pulseIn(echoPin, HIGH));
    distance = float(duration / 29 / 2);
    return distance;
}

void setup()
{
    Serial.begin(115200);
    WiFi.begin(WIFISSID, PASSWORD);

    dht.begin();

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    Serial.println();
    Serial.print("Wait for WiFi...");

    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(500);
    }

    Serial.println("");
    Serial.println("WiFi Connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    client.setServer(MQTT_BROKER, 1883);
    client.setCallback(callback);
}

void loop()
{
    if (!client.connected())
    {
        reconnect();
    }

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    distance = readDistance();

    dtostrf(distance, 4, 2, str_sensor);
    dtostrf(humidity, 4, 2, str_HumSensor);
    dtostrf(temperature, 4, 2, str_TempSensor);

    sprintf(topic, "%s%s", "/v1.6/devices/", DEVICE_LABEL);
    sprintf(payload, "%s", "");
    sprintf(payload, "{\"%s\": %s,", VARIABLE_LABEL_1, str_sensor);
    sprintf(payload, "%s\"%s\": %s,", payload, VARIABLE_LABEL_2, str_HumSensor);
    sprintf(payload, "%s\"%s\": %s}", payload, VARIABLE_LABEL_3, str_TempSensor);

    Serial.println("Publishing values to Ubidots Cloud");
    Serial.print("Distance = ");
    Serial.println(distance);
    Serial.print("Humidity = ");
    Serial.println(humidity);
    Serial.print("Temperature = ");
    Serial.println(temperature);

    client.publish(topic, payload);
    client.loop();
    delay(1000);
}