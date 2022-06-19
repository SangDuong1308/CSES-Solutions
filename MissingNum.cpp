#include<iostream>
#include<algorithm>
using namespace std;
void countingSort(long long arr[], long long n)
{
    long long max_val = arr[0];
    for (long long i = 1; i < n; i++)
        if (arr[i] > max_val)
            max_val = arr[i];

    long long *f = new long long[max_val + 1]{0};
    for (long long i = 0; i < n; i++)
        f[arr[i]]++;

    for (long long i = 1; i <= max_val; i++)
        f[i] = f[i] + f[i - 1];

    long long *b = new long long[n];
    for (long long i = n - 1; i >= 0; i--)
    {
        b[f[arr[i]] - 1] = arr[i];
        f[arr[i]]--;
    }
    for (long long i = 0; i < n; i++)
        arr[i] = b[i];
}
bool IsGrow(long long a[], long long n)
{
    long long dem = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        if (a[i + 1] = a[i] + 1 )
            dem++;
    }
    if (dem == n - 1)
        return true;
    else
        return false;
}

int main()
{
    long long int  n;
    cin >> n;
    long long int a[n];
    long long int sum=0;
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
   cout<<n*(n+1)/2-sum;
}