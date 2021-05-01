//https://codeforces.com/contest/1469/problem/A
#include<bits/stdc++.h>
using namespace std;
int  Pallindromecheck(string s)
{
    stack<char>mys;
    int flag=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='(')
        {

          flag=1;
         return 1;
         break;
        }

        if (s[i]==')')
        {
            if (flag=1)
               return 0;
               break;
        }
    }


}
int main()
{
    int t;
    cin>>t;
    string s;
    while (t--)
    {
        cin>>s;
     int  ns=Pallindromecheck(s);
     if (s.length()%2!=0)
        cout<<"no"<<endl;
        else if (s[0]==')')
         cout<<"no"<<endl;
               else if (s[s.length()-1]=='(')
         cout<<"no"<<endl;
        else cout<<"yes"<<endl;
   /*  else
     {*
            for (int i=0;i<s.length()/2;i++)
     {
         if (s[i]=='?')
            s[i]='(';
            else if (s[i]==')')
                s[i]='(';
     }
            for (int i=s.length()/2;i<s.length();i++)
     {
         if (s[i]=='?')
            s[i]='(';
                 else if (s[i]=='(')
                s[i]=')';
     }




     }
  */








    }







    return 0;

}
