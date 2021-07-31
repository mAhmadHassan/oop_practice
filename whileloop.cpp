 #include<iostream>
using namespace std;
int main()
{
 int a=6;
 int b=1;
    int c;
    do 
    {
        c=a*b;

        cout<<a<<"*"<<b<<"       "<<c<<endl;
        b++;
    }
    while (b<10);
    return 0;
    }