/*

 Problem link : https://codeforces.com/problemset/problem/962/A

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

int main()
{
    optimize();
    ll n;
    cin>>n;
    ll a[n+2];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll half=sum/2;
    if(sum%2)half++;
    ll okk=0;
    for(ll i=0;i<n;i++)
    {
        okk+=a[i];
        if(okk>=half)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}

//Alhamdulillah..

/*
input :

6
2 2 2 2 2 2


output :

3

*/




