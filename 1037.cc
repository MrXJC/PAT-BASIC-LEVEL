#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
int a,b,c,a1,b1,c1;
bool flag;
int ans;
scanf("%d.%d.%d",&a,&b,&c);
scanf("%d.%d.%d",&a1,&b1,&c1);

c=a*17*29+b*29+c;
c1=a1*17*29+b1*29+c1;
ans=c1-c;
if(ans<0)
{
    ans=-ans;
    cout<<'-';
}
cout<<ans/29/17<<'.'<<ans/29%17<<'.'<<ans%29<<endl;
return 0;
}
