//https://atcoder.jp/contests/abc200/tasks/abc200_c
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

    long long n;
    cin>>n;
    long long int a[n];
    long long int c[200];
    for (int i=0;i<200;i++)
        c[i]=0;
    for (int i=0;i<n;i++)
    {
          cin>>a[i];
          int m=a[i]%200;
             c[m]++;
    }
   long long int count=0;
    for (int i=0;i<200;i++)
    {
     count=count+(c[i]*(c[i]-1)/2);

    }
    cout<<count<<endl;
    return 0;
}
