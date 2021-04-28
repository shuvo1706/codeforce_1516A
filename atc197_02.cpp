#include<bits/stdc++.h>
using namespace std;
int main()
{
int h,w,x,y,count=0;
cin>>h>>w>>x>>y;
char c[h][w];
for (int i=1;i<=h;i++)
{
    for (int j=1;j<=w;j++)
    {
        cin>>c[i][j];
    }

}
int yc=y,xc=x,ub=0,lb=0;
int c1=0,c2=0;
while (!(ub==1 && lb==1))
{
         if (c[x][yc]=='.')
         {
               count++;
         }

        else
        {
            if(yc>y)
            {

                ub=1;
                yc=y;
            }
            else
                lb=1;

        }
        if(yc>=y&&ub==0)
           yc=yc+1;
        else
        {
            yc=yc-1;
            if (yc<1)
            lb=1;

        }
   cout<<"hi"<<endl;
}
ub=0;
lb=0;

while (!(ub==1 && lb==1) )
{
         if (c[xc][y]=='.')
        count++;
          else
        {
            if(xc>x)
            {

                ub=1;
                xc=x;
            }
            else
                lb=1;

        }
        if(xc>=x&&ub==0)
           xc=xc+1;
        else
        {
            xc=xc-1;
            if (xc<1)
            lb=1;

        }
        cout<<"hello"<<endl;
}


cout<<count-1<<endl;

    return 0;
}

