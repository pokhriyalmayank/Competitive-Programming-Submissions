#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x,p,k;
        cin>>n>>x>>p>>k;
        long long a[n];
        long long operations=0,index;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                index=i+1;
            }
        }
        if(a[index-1]!=x)
        {
            a[k-1]=x;
            operations++;
            sort(a,a+n);
         for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                index=i+1;
            }
        }

        }
        if(a[p]==x)
        {
            cout<<operations<<endl;
        }
        else if(k>=p&&a[p-1]>=x)
        {
            if(p>=index && p<=k)
            {
                cout<<(p-index)+operations<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else if(k<=p&&a[p-1]<=x)
        {
            cout<<(index-p)+operations<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
