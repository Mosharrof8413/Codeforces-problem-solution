/*
 Problem : https://codeforces.com/contest/1660/problem/B

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
    ll t;
    cin>>t;
    while(t--)
    {

     ll n;
     cin>>n;
     ll a[n];
     priority_queue<int >pq;
     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     if(n==1 && a[0]>1)
     {
         cout<<"NO"<<endl;
         continue;
     }

     if(a[n-1]-a[n-2]>1)
     cout<<"NO"<<endl;
     else cout<<"YES"<<endl;

    }

}

//Alhamdulillah..


/*
input:
6
2
2 3
1
2
5
1 6 2 4 3
4
2 2 2 1
3
1 1000000000 999999999
1
1

Output:

YES
NO
NO
YES
YES
YES



*/



