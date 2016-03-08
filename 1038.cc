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
int a[101]={0};
int t,i;
cin>>t;
while(t--)
{
    cin>>i;
    a[i]++;
}
cin>>t;
t--;
while(t--)
{
    cin>>i;
    cout<<a[i]<<' ';
}
cin>>i;
cout<<a[i]<<endl;
return 0;
}
