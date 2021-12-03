#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,t,d,ans,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n*(n+1)/2;
        a=1;
        while(a<=n)
        {
            ans-=2*a;
            a=a*2;
        }
        cout<<ans<<endl;
    }
        return 0;

}
