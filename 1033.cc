/*
���Ե�2 ������� û�д�� ������cin>>key>>str;�ǲ����е�
����Ӧ��ʹ��
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
