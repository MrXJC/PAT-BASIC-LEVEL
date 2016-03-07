#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
#else
    //freopen("input.txt", "r", stdin);
#endif
char c;
int t,i,j;
cin>>t>>c;
for(i=0;i<t;i++)
    cout<<c;

    cout<<endl;
j=((t+1)/2-2)*2+1;
for(i=0;i<j;i++)
{
    if(i%2)
    {
       for(int k=0;k<t;k++)
       {
           if(k==0||k==t-1)
            cout<<c;
           else
            cout<<' ';
       }
        cout<<endl;
    }

}

for(i=0;i<t;i++)
    cout<<c;
    cout<<endl;
return 0;
}
