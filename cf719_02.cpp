//https://codeforces.com/contest/1520/problem/B
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

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,q;
        string h;
        cin>>n;
        m=n;
        if (n<10)
            cout<<n<<endl;
        else
        {
                    string s=to_string(m);
        int length=s.length();


        int f=s[0]-'0';

            for (int i=0;i<length;i++)
            {
                h+=s[0];
            }
       if (stoi(h)>n)
       {

       q=((length-1)*9)+(f-1);
       }
       else

       q=((length-1)*9)+(f);

      cout<<q<<endl;


        }



    }










    return 0;
}

