#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char p[]={'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
bool flag = true;
string num;
int t,n;
cin>>t;
while(t--){
cin>>num;
n=0;
for(int i=0;i<17;i++)
{
   n+= w[i]*(num[i]-'0');
}
if(p[n%11]!=num[17])
{
    cout<<num<<endl;
    flag=false;
}

}
if(flag)
{
    cout<<"All passed"<<endl;
}



return 0;
}
