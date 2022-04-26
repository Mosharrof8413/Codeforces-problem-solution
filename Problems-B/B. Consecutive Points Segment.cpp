/*
 Problem : https://codeforces.com/contest/1671/problem/B

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

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;

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
        for(ll i=0;i<n;i++)cin>>a[i];

        ll over=0,two=0,three=0;
        for(ll i=0;i<n-1;i++)
        {
            ll dif=a[i+1]-a[i];
            if(dif>3)
            {
                over++;
            }
            else if(dif==3)three++;
            else if(dif==2)two++;
        }
        if(over || three>1 || two>2 || (three==1 && two))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }


}

//Alhamdulillah..


/*
input:

5
2
1 4
3
1 2 3
4
1 2 3 7
1
1000000
3
2 5 6


Output:

YES
YES
NO
YES
YES


*/








