/*

 Problem link :

 */
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define PB push_back
#define F first
#define S second
const int mx=300123;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll pre_zero[n+2]= {0},pre_one[n+2]= {0};
        string a,b;
        cin>>a>>b;
        for(ll i=n-1; i>=0; i--)
        {
            if(a[i]==b[i])n--;
            else break;
        }
        if(a[0]=='0')
            pre_zero[0]=1;
        else pre_one[0]=1;

        for(ll i=1; i<n; i++)
        {
            if(a[i]=='1')
            {
                pre_one[i]=pre_one[i-1]+1;
                pre_zero[i]=pre_zero[i-1];
            }
            else
            {
                pre_one[i]=pre_one[i-1];
                pre_zero[i]=pre_zero[i-1]+1;
            }
        }
        // cout<<pre_zero[0]<<" "<<pre_one[0]<<endl;
        ll cnt=0;
        while(n)
        {
            if(pre_one[n-1]==pre_zero[n-1])
            {
                cnt++;
                while(n)
                {
                    if(a[n-1]!=b[n-1] && cnt%2)n--;
                    else if(a[n-1]==b[n-1] && cnt%2==0)n--;
                    else break;
                }
            }
            else break;
        }
        //cout<<cnt<<" "<<n<<endl;
        if(n==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

//Alhamdulillah..

/*
intput :

5
1 1
999
1 1
1000
2 1
51 50
2 2
51 50
3 3
101 102 103


output :

Yes
No
Yes
Yes
No


*/











