/*

 Problem link : https://codeforces.com/contest/1536/problem/B

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
        string st;
        cin>>st;
        map<string,int>mp;
        for(ll i=0; i<n; i++)
        {
            string ss="";
            for(int j=1; j<=3 && i+j-1<n; j++)
            {
                ss+=st[i+j-1];
                mp[ss]=1;
            }
        }


        ll check=0;
        for(char ch='a'; ch<='z'; ch++)
        {
            string tt="";
            tt+=ch;
            if(mp.find(tt) == mp.end())
            {
                cout<<tt<<endl;
                check=1;
                break;
            }
        }
        if(check)continue;


        for(char ch1='a'; ch1<='z'; ch1++)
        {

            for(char ch2='a'; ch2<='z'; ch2++)
            {
                string tt="";
                tt+=ch1;
                tt+=ch2;
                if(mp.find(tt)==mp.end())
                {
                    cout<<tt<<endl;
                    check=1;
                    break;
                }
            }
            if(check)break;
        }
        if(check)continue;

        for(char ch1='a'; ch1<='z'; ch1++)
        {

            for(char ch2='a'; ch2<='z'; ch2++)
            {
                for(char ch3='a'; ch3<='z'; ch3++)
                {
                    string tt="";
                    tt+=ch1;
                    tt+=ch2;
                    tt+=ch3;
                    if(mp.find(tt)==mp.end())
                    {
                        cout<<tt<<endl;
                        check=1;
                        break;
                    }
                }
                if(check)break;
            }
            if(check)break;
        }



    }

}

//Alhamdulillah..

/*
intput :

3
28
qaabzwsxedcrfvtgbyhnujmiklop
13
cleanairactbd
10
aannttoonn

output :

ac
f
b


*/





