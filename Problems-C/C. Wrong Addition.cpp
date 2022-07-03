/*

 Problem link : https://codeforces.com/problemset/problem/1619/C

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
        ll a,s;
        cin>>a>>s;
        vector<ll>ans,ok;
        bool f=true;
        while(a && s)
        {
            ll last_digit_of_a=a%10;
            a/=10;
            ll last_digit_of_s=s%10;
            s/=10;
            if(last_digit_of_a<=last_digit_of_s)
            {
                ans.PB(last_digit_of_s - last_digit_of_a);
            }
            else
            {
                ll last_digit_of_ss=s%10;
                s/=10;
                last_digit_of_ss*=10;
                last_digit_of_ss+=last_digit_of_s;
                if(last_digit_of_ss>18 || last_digit_of_ss<10)
                {
                    f=false;
                    break;
                }
                ans.PB(last_digit_of_ss - last_digit_of_a);
            }
        }
        if(a!=0 || !f)
        {
            cout<<-1<<endl;
            continue;
        }

        ans.PB(s);
        reverse(ans.begin(),ans.end());
        bool flag=true;
        for(ll i=0; i<ans.size(); i++)
        {
            if(ans[i]==0 && flag)
            {
                continue;
            }
            ok.PB(ans[i]);
            flag=false;
        }
        for(auto x : ok)cout<<x;
        cout<<endl;
    }

}

//Alhamdulillah..

/*
intput :

6
17236 1106911
1 5
108 112
12345 1023412
1 11
1 20

output :

3465
4
-1
90007
10
-1


*/





