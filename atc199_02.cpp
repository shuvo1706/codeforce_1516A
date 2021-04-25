#include<bits/stdc++.h>
using namespace std;
#include <set>

int main()
{
    int n;
    cin>>n;
  int a[n];
   int b[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for (int i=0;i<n;i++)
    {
           cin>>b[i];

    }



  sort(a, a+n);
  sort(b,b+n);
int r=b[0]-a[n-1]+1;
if (r<0)
    cout<<0<<endl;
else
    cout<<r<<endl;




    }

