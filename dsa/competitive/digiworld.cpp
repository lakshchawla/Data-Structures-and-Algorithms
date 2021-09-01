#include <iostream>
using namespace std;

int main(void){
    int n; 
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];

    int key; 
    cin>>key;

    int i = 0;
    while (key > arr[i])
    {
        i++;
    }
    cout<<i;

    
}