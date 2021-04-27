
//https://atcoder.jp/contests/abc198/tasks/abc198_b
#include<bits/stdc++.h>
using namespace std;
bool pallindrome(int n)
{
    int t=n,rem,sum=0;
    while (t>0)
    {
        rem=t%10;
        t=t/10;
        sum=sum*10+rem;
    }
 
    if (sum==n)
        return true;
    else
        return false;
}
int main()
{
  int n;
  cin>>n;
  if(n==0)
    cout<<"Yes"<<endl;
  else
  {
    while(n%10==0)
          {
              n=n/10;
          }
 
            if (pallindrome(n))
    cout<<"Yes"<<endl;
          else
           cout<<"No"<<endl;
  }
 
 
 
return 0;
}
