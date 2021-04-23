#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
      long long int   m=2050,k,count=0;
        cin>>n;
        if (n%2!=0 || n<2050)
            cout<<-1<<endl;
 else
 {

        while (n>0)
    {

            while (m<=n)
        {


            m=m*10;

        }

        m=m/10;
        k=n/m;

        count=count+k;
        n=n-(m*k);
        if(n<2050)
            break;
          m=2050;

    }
        if (n==0)
        cout<<count<<endl;
    else
        cout<<-1<<endl;
 }

    }
    return 0;
}
