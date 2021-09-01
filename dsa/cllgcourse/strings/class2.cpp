#include <iostream>
#include <string.h>
using namespace std;

string mainString;
string replaceStr;
string findStr;

void printStr()
{
    cout << "Final output: " << mainString;
}

void replaceString(string findStr)
{
    cout << "\n\nReplace: ";
    getline(cin, replaceStr);

    int i = 0, j = findStr.length(), r = 0;

    for (int i = 0; i < mainString.length(); i++)
    {
        if (findStr[0] == mainString[i])
        {
            j += i;
            for (int j = 0; j < findStr.length(); j++)
            {
                if (mainString[i + j] != findStr[j])
                    goto C;
            }
            mainString.replace(i, findStr.length(), replaceStr);
            r++;
        }
    C:
        continue;
    }

    if (r == 0)
    {
        cout << "No match found!";
        return;
    }
    cout << "\nTotal " << r << " replacements done\n"
         << endl;

    printStr();
}

void findString()
{
    cout << "\nFind: ";
    getline(cin, findStr);

    int i = 0, j = findStr.length(), f = 0;

    for (int i = 0; i < mainString.length(); i++)
    {
        if (findStr[0] == mainString[i])
        {
            j += i;
            for (int j = 0; j < findStr.length(); j++)
            {
                if (mainString[i + j] != findStr[j])
                    goto C;
            }
            cout << "\nElement found at index " << i;
            f++;
        }
    C:
        continue;
    }

    if (f == 0)
    {
        cout << "\nElement not found";
        return;
    }

    replaceString(findStr);
}

int main(void)
{
    cout << "Input text: \n";
    getline(cin, mainString);

    findString();
}
