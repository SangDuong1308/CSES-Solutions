#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    long long int sum = 0;
    for (long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if (n == 1)
        cout << "0";
    else
    {
        for (long long i=1;i<n-1;i++)
    {
        if (a[i]<=a[i-1] )
        {
            sum+=a[i-1]-a[i];
            a[i] = a[i] + a[i-1]-a[i];
        }
    }
    cout<<sum+a[n-2]-a[n-1];
    }
}