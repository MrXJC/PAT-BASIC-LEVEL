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
int vis[128]={0};
string a,b;
cin>>a;
cin>>b;
for(auto w:a)
{
    vis[w]++;
}
for(auto w:b)
{
    vis[w]--;
}
int sum=0;
for(int i=0;i<128;i++)
    if(vis[i]<0)
     sum+=vis[i];
if(sum<0)
    cout<<"No "<<-sum<<endl;
else
    cout<<"Yes "<<a.size()-b.size()<<endl;
return 0;
}
