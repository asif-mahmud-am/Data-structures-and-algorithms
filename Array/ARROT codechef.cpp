#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    ll n; cin>>n;
    ll sum = 0;
    while(n--)
    {
        ll num;
        cin>>num;
        sum+=num;
        sum = ((sum%MOD)+MOD)%MOD;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        sum+=sum;
        sum = ((sum%MOD)+MOD)%MOD;
        cout<<sum<<endl;
    }

   return 0;
}
