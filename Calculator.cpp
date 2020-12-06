#include <iostream>

using namespace std;

int main()
{
    int theFirstNumber,the_second_number;
    char sign;
    cout<<"The first number: ";
    cin>>theFirstNumber ;
    cout<<"The second number: ";
    cin>> the_second_number;
    cout<<"The sign: ";
    cin>>sign;
    if(sign=='+')
    {
        cout<<"The result of + : "<<theFirstNumber+the_second_number<<endl;
    }
    else if(sign=='-')
    {
        cout<<"The result of - : "<<theFirstNumber-the_second_number<<endl;
    }
    else if(sign=='/')
    {
        cout<<"The result of / : "<<theFirstNumber/the_second_number<<endl;
    }
   else if(sign=='*')
     {
        cout<<"The result of * : "<<theFirstNumber*the_second_number<<endl;
    }
     else
          cout<<"Nothing to be calculated......"<<endl;
    return 0;
}
