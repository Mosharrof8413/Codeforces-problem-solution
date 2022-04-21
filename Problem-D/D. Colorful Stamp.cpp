/*
 Problem : https://codeforces.com/contest/1669/problem/D

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
        string st;
        cin>>st;

        bool ans=true;
        set<char>s;
        for(ll i=0; i<n; i++)
        {
            if(st[i]=='W')
            {
                if(s.size()==1)
                {
                    ans=false;
                }
                s.clear();
                if(!ans)break;
            }
            else
            {
                s.insert(st[i]);
            }
        }
        if(s.size()==1)ans=false;


        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

//Alhamdulillah..


/*
input:

12
5
BRBBW
1
B
2
WB
2
RW
3
BRB
3
RBB
7
WWWWWWW
9
RBWBWRRBW
10
BRBRBRBRRB
12
BBBRWWRRRWBR
10
BRBRBRBRBW
5
RBWBW

Output:

YES
NO
NO
NO
YES
YES
YES
NO
YES
NO
YES
NO


*/
