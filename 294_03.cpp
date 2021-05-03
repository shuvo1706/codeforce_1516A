#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    t=n;

    map<long long int,int>m,k;
    while (t--)
    {
        long long int a;
        cin>>a;
        if (m[a]>=1)
        m[a]++;
        else
            m[a]=1;


    }
      /*  for (std::map<long long int,int>::iterator it=m.begin();it!=m.end();it++)
    {
       cout<<it->first<<"="<<it->second<<endl;
    }*/
    t=n-1;
      while (t--)
    {
        long long int a;
        cin>>a;
         if (k[a]>=1)
        k[a]++;
        else
            k[a]=1;
        m[a]--;
    }
         /* for (std::map<long long int,int>::iterator it=m.begin();it!=m.end();it++)
    {
       cout<<it->first<<"="<<it->second<<endl;
    }*/

    for (std::map<long long int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        if (it->second==1)
        {
            cout<<it->first<<endl;
           it->second--;
           if (it->second==0)
           {
               m.erase(it->first);
           }
            break;
        }
    }


       for (std::map<long long int,int>::iterator it=m.begin();it!=m.end();it++)
    {
       if (it->second==0)
         it->second=1;
       else
        it->second++;
    }
     /* for (std::map<long long int,int>::iterator it=m.begin();it!=m.end();it++)
    {
       cout<<it->first<<"="<<it->second<<endl;
    }
*/
        n=n-2;
        t=n;

      while (t--)
    {
        long long int a;
        cin>>a;
        k[a]--;
    }

    for (std::map<long long int,int>::iterator it=k.begin();it!=k.end();it++)
    {
        if (it->second==1)
        {
            cout<<it->first;
           it->second--;
            break;
        }
    }

return 0;

}
