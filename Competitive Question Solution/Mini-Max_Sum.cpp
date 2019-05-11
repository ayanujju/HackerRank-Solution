#include<iostream>
using namespace std;

int main()
{
    long long int a[5];
    long long i,sum=0;
    for(i=0;i<5;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    long long max=a[0],min=a[4];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }  
    cout << sum-max << " " << sum-min;
}
