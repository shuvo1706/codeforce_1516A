
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
    vector<int>v;
    long long int x,y,z,a,b,c,maxi=0,mini=0;
    while(t--)
    {
        int count=0,count2=0;
        cin>>x>>y>>z;
        v.push_back(x);
           v.push_back(y);
              v.push_back(z);

        if (x==y && x==z)
        {
            cout<<"YES"<<endl;
              cout<<x<<" "<<y<<" "<<z<<endl;

                v.clear();
              continue;


        }
        else if (x!=y && y!=z && x!=z)
        {
            cout<<"NO"<<endl;

v.clear();
            continue;

        }
        else
        {
              mini=min(x,y);
        mini=min(mini,z);
          maxi=max(x,y);
        maxi=max(maxi,z);
        for (int i=0;i<v.size();i++)
        {
            if (v[i]==mini)
                count++;
            if (count==2)
            {    cout<<"NO"<<endl;
           break;


            }


        }

      for (int i=0;i<v.size();i++)
        {
            if (v[i]==maxi)
                count2++;
            if (count2==2)
            {
                  cout<<"YES"<<endl;
                cout<<maxi<<" "<<mini<<" "<<1<<endl;
                break;



        }

    }
        }

v.clear();

    }

    return 0;
}
