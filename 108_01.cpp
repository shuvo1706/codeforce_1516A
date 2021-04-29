https://codeforces.com/contest/1519/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
long long int r,b,d;
while(t--)
{
    cin>>r>>b>>d;
    if (abs(r-b)<=d)
        cout<<"yes"<<endl;
    else
    {
        long long int mini=(r<b)?r:b;

        long long int maxi=(r>b)?r:b;

        if (((d+1)*mini)>=maxi)
        {
            cout<<"yes"<<endl;

        }
        else
               cout<<"no"<<endl;


    }

}









    return 0;
}
