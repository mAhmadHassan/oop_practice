#include<iostream>
using namespace std;
int main ()
{    int min,i,j,n=6;
     int Arr[n]={2,6,7,1,0,5};
    for(i=0;i<=5;i++)
    {
        min=i;
        for(j=i+1;j<6;j++)
        {
            if(Arr[j]<Arr[min])
             {
                 min=j;
             }
        }
        if(min!=Arr[i])
         {
             swap(Arr[i],Arr[min]);
         }
    }
    for(int k=0;k<6;k++)
    {
    cout<<Arr[k]<<"  ";
    }
    return 0;
}