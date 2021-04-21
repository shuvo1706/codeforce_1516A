#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
            for (int i=0;i<n-1;i++)
            {
                if (k==0)
                    break;
                if (a[i]==0)
                    continue;
                else
                {
                  if (k-a[i]>=0)
                  {
                      k=k-a[i];
                     a[n-1]=a[n-1]+a[i];
                      a[i]=0;


                  }
                    else
                    {
                        a[i]=a[i]-k;
                         a[n-1]=a[n-1]+k;
                        k=0;
                    }
                }
            }

            for (int i=0;i<n;i++)
            {
                                cout<<a[i]<<" ";

            }
    cout<<endl;
    }

    return 0;
}
