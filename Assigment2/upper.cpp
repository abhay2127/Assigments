#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character :\n";
    cin>>ch;
     
     if(ch>=65&&ch<=90)
     cout<<endl<<"enter character is upper case:\n";
     else if(ch>=97&&ch<=122)
     cout<<endl<<"you enter character is lower case:\n";
     else
     cout<<"you enter a wrong character";
    return 0;
}