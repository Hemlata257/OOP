#include<iostream>
using namespace std;
#include<string.h>
string testPalindrome(string str,int i,int l)
{
    if(str[i]!=str[l-i-1])
    {
         cout<<str[-1]<<endl;
        return "false";
    }
    if(str[i]!='\0')
       {
            return testPalindrome(str,i+1,l);
       }

    return "true";
}
int main()
{
    string str;
    int i=0;
    int l;
    cout<<"enter a string to check if it is palindrome or not";
    getline(cin,str);
     l=str.length();
    cout<<testPalindrome(str,i,l);
}
