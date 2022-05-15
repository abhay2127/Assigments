#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks >=80)
    {
        cout<<"your grade is A";
    }
    else if (marks >=60)
    {
        cout<<"your grade is B";
    }
    else if(marks >=50)
    {
        cout<<"your garde is C";
    }
    else if(marks >=45)
    {
        cout<<"your garde is D";
    }
    else if(marks >=25)
    {
        cout<<"your grade is E";
    }
    else if(marks <=25)
    {
        cout<<"your grade is F";
    }
    else
    {
        cout<<"you enter a invalid number";
    }
    return 0;
}