#include<iostream>
using namespace std;
int n;
int facturial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n/facturial(n-1);

}
int main()
{ int n;
    cout<<"Enter number"<<endl;
    cin>>n;
 cout<<"Facturial of "<<n<<"is "<<facturial(n)<<endl;
}