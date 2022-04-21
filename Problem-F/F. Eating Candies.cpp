/*
 Problem : https://codeforces.com/contest/1669/problem/F

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+3];
        for(ll i=1; i<=n; i++)cin>>a[i];

        ll r=n;
        ll l=1;
        ll left_sum=a[1],right_sum=a[n];
        //l++,r--;
        ll ans=0;
        // cout<<left_sum<<" "<<right_sum<<endl;
        while(l<r)
        {

            if(left_sum==right_sum)
            {
                ans=l+(n-r+1);
                l++;
                left_sum+=a[l];
            }
            else if(left_sum < right_sum)
            {
                l++;
                left_sum+=a[l];
            }
            else
            {
                r--;
                right_sum+=a[r];
            }

        }
        cout<<ans<<endl;
    }

}

//Alhamdulillah..


/*
input:

4
3
10 20 10
6
2 1 4 2 4 1
5
1 2 4 8 16
9
7 3 20 5 15 1 11 8 10



Output:

2
6
0
7



*/





 
