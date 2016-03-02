#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#define LOCAL
using namespace std;
int main()
{
#ifdef LOCAL
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
int a,t=9;
vector<int> b;
int zero=0;
cin>>zero;
while(t--)
{
    cin>>a;
    while(a--)
    b.push_back(9-t);

}

//sort(b.begin(),b.end());

cout<<b[0];
while(zero--)
    cout<<"0";
for(int i=1;i<b.size();i++)
{
   cout<<b[i];
}
cout<<endl;
return 0;
}
