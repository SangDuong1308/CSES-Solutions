#include<iostream>
using namespace std;
int main()
{
    long long n;
    unsigned long long mod=1e9+7;
    cin>>n;
    unsigned long long res=2;
    for (long long i = 1;i < n;i++)
    {
        res*=2;
        res%=mod;
    }
    cout<<res;
}