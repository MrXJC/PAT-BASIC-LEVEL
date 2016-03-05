/*
测试点2 的情况是 没有错键 所以用cin>>key>>str;是不可行的
所以应该使用
getline(cin, key);
getline(cin, str);
*/
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
bool a[128]={0};
string key;
string str;
getline(cin, key);
getline(cin, str);
for(auto w: key)
{
    if('+'==w)
    {
        for(int i=0;i<26;i++)
            a['A'+i]=1;
    }
    else
    {
        if(w>='A'&&w<='Z')
        {
            a[(int)w]=1;
            a['a'+(int)w-'A']=1;
        }
        else if(w>='a'&&w<='z')
        {
            a[(int)w]=1;
            a['A'+(int)w-'a']=1;
        }
        else
            a[(int)w]=1;
    }
}
for(auto w: str)
{
    if(!a[w])
        cout<<w;
}
cout<<endl;
return 0;
}
