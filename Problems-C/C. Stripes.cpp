/*

 Problem link : https://codeforces.com/contest/1742/problem/C

 */
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define PB push_back
#define F first
#define S second
const int mx=20;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char ch[8][8];
        bool f=false;
        for(ll i=0; i<8; i++)
        {
            ll red=0;
            for(ll j=0; j<8; j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='R')red++;
            }
            if(red==8)f=true;
        }
        if(f)cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }
}

//Alhamdulillah..

/*
intput :

4


....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...


RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB


RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB


........
........
........
RRRRRRRR
........
........
........
........



output :

R
B
B
R




*/










 
