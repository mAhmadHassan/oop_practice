#include<iostream>
using namespace std;
int main ()
{
    int a[5],max=0,min=0;
    for(int i=0;i<5;i++)
    {
       cout<<"enter no ";
       cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]>a[j])
            {
                max=a[i];
            }
        }
        
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]<a[j])
            {
                min=a[i];
            }
        }
        
    }
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;
}