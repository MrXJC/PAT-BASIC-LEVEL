#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
//#define LOCAL
using namespace std;
int main()
{
#ifdef LOCAL
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
int a[10]={0};
string num;
cin>>num;
for(auto w:num)
    a[w-'0']++;

 for(int i=0;i<10;i++)
     if(a[i])
     cout<<i<<":"<<a[i]<<endl;

return 0;
}
