#include<iostream>
using namespace std;
void stringReverse(string str, int i)
{
if(str[i]=='\0')
    return;
else
{
    int l=str.length();
    cout<<str[l-i-1];
    return stringReverse(str,i+1);
}

}
int main()
{
    string str;
    cout<<"enter a string";
    getline(cin,str);
    int i=0;
    stringReverse(str,i);
}
