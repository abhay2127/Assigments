#include<iostream>
using namespace std;
int main()
{
    int a,b,att,per;
    cout<<"enter number of classes held :\n"<<endl;
    cin>>a;
    cout<<"enter number of classes you atten :\n"<<endl;
    cin>>b;
    att=b*100/a;
    cout<<"percantage of classes attende :"<<att<<endl;
    cin>>att;
    if(att>=75)
    {
        cout<<"your are eligible for exam";
    }
    else{
        cout<<"you are not eligible for exam attendance is less than 75%";
    }
    return 0;
}