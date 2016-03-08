#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct student
{
  string num;
  int a;
};

int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
student stu[1001];
string num;
int a,t;
cin>>t;
while(t--)
{
    cin>>num>>a;
    stu[a].num=num;
    cin>>stu[a].a;
}
cin>>t;
while(t--)
{
    cin>>a;
    cout<<stu[a].num<<' '<<stu[a].a<<endl;
}
return 0;
}
