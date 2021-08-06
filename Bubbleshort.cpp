#include<iostream>
using namespace std;
int main ()
{
    int n=5, i , j , temp ;
    int Bs[n]={22,1,44,66,0};
    for( i=0; i<5; i++)
    {
        for ( j=0; j<5; j++)
        {
            if(Bs[j]>Bs[j+1])
            {
                temp=Bs[j];
                Bs[j]=Bs[j+1];
                Bs[j+1]=temp;

            }
            
        }
        
    }

    for(int k =1; k<=n; k++){
        cout<<Bs[k]<<" ";    }
return 0;

}