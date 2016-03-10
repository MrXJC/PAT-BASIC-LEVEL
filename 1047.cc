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
int t,max=0,maxid=0;
cin>>t;
int a[3]={0};
int vis[10001]={0};
while(t--)
{
  scanf("%d-%d %d",&a[0],&a[1],&a[2]);
  vis[a[0]]+=a[2];
  if(max<vis[a[0]])
  {
    max=vis[a[0]];
    maxid=a[0];
  }
}
cout<<maxid<<' '<<max<<endl;
return 0;
}
