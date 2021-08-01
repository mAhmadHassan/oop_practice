 #include<iostream>
using namespace std;
int main()
{
/* int a=6;
 int b=1;
    int c;
    do 
    {
        c=a*b;

        cout<<a<<"*"<<b<<"       "<<c<<endl;
        b++;
    }
    while (b<11);
    return 0;*/
    //pointers 

    /*int a=3;
    int *b=&a;
    cout<<"Adress of a is "<<b<<endl;
    cout<<" value of a is "<<*b<<endl;
    cout<<" Adress of a is "<<&a<<endl;*/
     // Array .
    /* cout<<"*********single dimensional*****"<<endl;
     int no[5];
     cout<<" Enter the value at 0 index"<<endl;
     cin>>no[0];
     cout<<"Enter the value at 3 index"<<endl;
     cin>>no[3];
     cout<<" the values are "<<no[0]<<"    "<<no[3]<<endl;*/
   float num[5]={22,44,555,0,0.99};
     cout<<" maths number are "<<num[0]<<endl;
     cout<<" Eng number are "<<num[2]<<endl;
     cout<<" Phy number are "<<num[4]<<endl;
     cout<<"2D Arrys "<<endl;
     float arr[3][3]={55,0.9976,88,1,44,0};
     cout<<" maths number are "<<arr[0][0]<<endl;
     cout<<" Eng number are "<<arr[2][1]<<endl;
     cout<<" Phy number are "<<arr[2][2]<<endl;
   
    }