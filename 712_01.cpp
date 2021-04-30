#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int count=0;
            int l=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
                count++;
        }
        if (count==s.length())
        {
               cout<<"NO"<<endl;
              continue;
        }


        else
        {
            if (s[0]=='a'&& s[l-1]!='a')

                s='a'+s;
            else if(s[0]!='a'&& s[l-1]=='a')

                s=s+'a';
                    else if(s[0]!='a'&& s[l-1]!='a')
                s=s+'a';
                else
                {
                    for (int i=0;i<l;i++)
                    {
                        if(s[i]=='a'&&s[l-1-i]=='a')
                        continue;
                           if(s[i]!='a'&&s[l-1-i]=='a')
                           {
                                    s=s+'a';
                                    break;
                           }

                             else
                             {
                                  s='a'+s;
                                    break;
                             }
                    }
                }
        }
        cout<<"YES"<<endl;
 cout<<s<<endl;

    }
    return 0;
}
