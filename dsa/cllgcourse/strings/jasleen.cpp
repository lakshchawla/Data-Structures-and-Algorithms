#include <iostream>
using namespace std;

string str;

void replaceString();
void patternMatching();
void findAndReplaceAll();

int main()
{
    cout<<"\nEnter the string: ";
    getline(cin, str);

    cout<<"\n\n\nFirst Operation, Replacing a character in the string: \n";
    replaceString();

    cout<<"\n\n\nSecond Operation, Pattern matching in the string: \n";
    patternMatching();

    cout<<"\n\n\nThird Operation, Find and Replace the Pattern in the string: \n";
    findAndReplaceAll();

    return 0;
}

// Replace the character with the given character
void replaceString()
{
    char c1,c2;
    cout<<"Enter the Character that you want to Replace for: "; 
    cin>>c1;
    cout<<"Enter the Character that you want to Replace with: "; 
    cin>>c2;

    for(int i = 0; i <= str.length(); i++)
    {
        if(str[i] == c1)
        {
            str[i] = c2;
        }
    }
    cout<<"\nFinal String after Replacing All Occurrences of "<< c1<< " with "<<c2 <<" is "<<str;
    cout<<endl;
}

// Find the given string pattern 
void patternMatching()
{
    int temp=0, index, pos=0;
    string substr;
    
    cout<<"Enter the String that you want to match in the given string: "; 
    cin>>substr;

    while((index = str.find(substr, pos)) != string::npos) {
      cout << "\nMatch found at index: " << index << endl;
      pos = index + 1; //new position is from next element of index
      temp++;
    }
    if(temp==0)
    cout<<"\nThe substr is not present in given string\n";
}

// Replace the string pattern with the given string pattern
void findAndReplaceAll()
{
    string substr, replacestr;
    cout<<"Enter the String that you want to find in the given string: "; 
    cin>>substr;
    cout<<"Enter the String that you want to replace with the above string: "; 
    cin>>replacestr;

    size_t pos = str.find(substr);

    while( pos != std::string::npos)
    {
        str.replace(pos, substr.size(), replacestr);
        pos =str.find(substr, pos + replacestr.size());
    }
    cout<<"\nFinal String after Replacing All Occurrences of "<< substr<< " with "<< replacestr<<" is "<<str;
    cout<<endl<<"\n";
}