#include<bits/stdc++.h>
using namespace std;

int maxdigit(long long int n)
{

    int largest = 0;


    while (n) {
        int r = n % 10;


        largest = max(r, largest);
        n = n / 10;
}

return largest;
}
int mindigit(long long int n)
{

    int smallest =9;



    while (n) {
        int r = n % 10;
  smallest = min(r, smallest);

        n = n / 10;
    }

return smallest;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,k,m,x,y;
        cin>>a>>k;

            m=a;
        for (long long int i=2;i<=k;i++)
        {



            x=maxdigit(m);
            y=mindigit(m);

            if (y==0)
            {
                break;
            }
              m=m+x*y;

        }



         cout<<m<<endl;






           }







  return 0;

       }





