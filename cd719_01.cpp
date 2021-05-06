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

#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, __VA_ARGS__);fflush(stderr);
#else
	#define eprintf(...) 42
#endif

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
int main()
{

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        if (s.length()<=2)
        {
            cout<<"YES"<<endl;
            flag=1;

        }
        else
        {
             for (int i=0;i<n-1;i++)
        {



            if (s[i]==s[i+1])
                continue;
            else if (s[i]!=s[i+1])
            {
                char c=s[i];

                int o=i+2;

                while (o<n)
                {
                      if (s[o]==c)
                    {
                        cout<<"NO"<<endl;
                        flag=1;
                        break;
                    }
                    o++;

                }
                i=o;




            }

    if (flag==1)
        break;






        }



        }

if (flag==0)
{
      cout<<"YES"<<endl;
}








    }










    return 0;
}

