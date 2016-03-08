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
string str;
int a[128]={0};
getline(cin,str);
for(auto w:str)
{
    if(w>='A'&&w<='Z')
        w='a'+w-'A';

    a[w]++;
}
int max=0;
char c='a';
for(int i='a';i<='z';i++)
    if(a[i]>max)
    {
           max=a[i];
           c=i;
    }

cout<<c<<' '<<max<<endl;
return 0;
}
