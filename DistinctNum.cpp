#include<iostream>
#include<set>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for (long long i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    set<long long> res;
    for (long long i = 0; i < n; i++)
    {
        res.insert(a[i]);
    }
    cout<<res.size();
}