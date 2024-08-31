#include <iostream>
#include <string>
using namespace std;

void non_repeating(const string& str) 
{
    int i=0,count[256]={0}; 

    for (char ch : str) 
    count[(int)ch]++;

    for(i=0;i<256;i++)
    {
        if(count[i]==1)
        cout<<char(i)<<" ";
    }
    
    cout<<endl;

}

int main() {
    string String;

    cout << "Enter a string: ";
    getline(cin, String);

    non_repeating(String);
    
    return 0;
}
