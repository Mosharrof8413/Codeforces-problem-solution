/*

 Problem link : https://codeforces.com/contest/1690/problem/A

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
        if(n%3==0)
        {
            ll f=n/3;
            ll s=n/3;
            ll tr=n/3;
            f++;
            tr--;
            cout<<s<<" "<<f<<" "<<tr<<endl;
        }
        else if(n%3==1)
        {
            ll f=n/3;
            ll s=n/3;
            ll tr=n/3;
            f+=1;
            tr--;
            f++;
            cout<<s<<" "<<f<<" "<<tr<<endl;
        }
        else
        {
            ll f=n/3;
            ll s=n/3;
            ll tr=n/3;
            f+=2;
            s+=1;
            tr--;
            cout<<s<<" "<<f<<" "<<tr<<endl;
        }
}


}

//Alhamdulillah..

/*
input :

6
11
6
10
100000
7
8



output :

4 5 2
2 3 1
4 5 1
33334 33335 33331
2 4 1
3 4 1



*/









 
