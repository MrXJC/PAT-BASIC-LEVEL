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
int t;
cin>>t;
int a[3]={0},b[3]={0};
while(t--)
{
    cin>>a[0]>>a[1]>>b[0]>>b[1];
    if(a[1]==b[1])
        continue;
    if(a[0]+b[0]==a[1])
        b[2]++;
    else if(a[0]+b[0]==b[1])
        a[2]++;
}
cout<<a[2]<<' '<<b[2]<<endl;
return 0;
}
