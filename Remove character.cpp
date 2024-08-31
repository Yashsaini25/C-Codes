#include <iostream>
#include <string>
using namespace std;

string remove_character(const string& oldstring, char ch)
{
    string newstring;
    for(char c : oldstring)
    {
        if(ch!=c)
        newstring=newstring+c;
    }
   
    return newstring;

}

int main()
{
    char ch;
    string oldstring;
    cout<<"Enter the string: ";
    getline(cin,oldstring);
    cout<<"Enter the character to be removed: ";
    cin>>ch;
    
    cout<<"Updated string: "<<remove_character(oldstring,ch)<<endl;

    return 0;
}

