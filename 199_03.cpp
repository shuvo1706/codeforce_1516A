//https://atcoder.jp/contests/abc199/tasks/abc199_c
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b,q,l,flag=0;
    string s;
    cin>>n;
    cin>>s;
    l=s.length();
    cin>>q;
    for (int i=0;i<q;i++)
    {
        cin>>t>>a>>b;
        if (t==2)

            flag^=1;
            else
            {
                if (!flag)
                    swap(s[a-1],s[b-1]);
                else
                {
                      if (a<=n)
                        a+=n;
                      else if (a>n)
                        a-=n;
                        if (b<=n)
                        b+=n;
                      else if (b>n)
                        b-=n;
                         swap(s[a-1],s[b-1]);
                }

            }
    }
   if (flag)
            {
                s=s.substr(n,n)+s.substr(0,n);
                cout<<s<<endl;
            }
            else
                cout<<s<<endl;
    return 0;
}
