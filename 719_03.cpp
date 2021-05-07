#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;


using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
  int a[n][n];
  int y=1;
   for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
            a[i][j]=0;
       if (n==2)
        cout<<-1<<endl;

       else{
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (i%2==0)
                {
                    a[i][j]=y;
                    j++;
                    y++;


                }
               else
               {
                   if (j%2!=0)
                   {


                   a[i][j]=y;
                    y++;
                   }
               }
            }
        }

        for (int i=0;i<n;i++)
   {
         for (int j=0;j<n;j++)
            {
                   if (a[i][j]==0)
                   {

                       a[i][j]=y;
                         y++;


                   }
            }

   }
   for(int i=0;i<n;i++)
   {
         for (int j=0;j<n;j++)
         {
             cout<<a[i][j]<<" ";
         }
       cout<<endl;
   }
       }

    }
    return 0;
}

