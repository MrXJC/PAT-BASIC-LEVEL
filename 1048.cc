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
string a;
string b;
cin>>a>>b;
int n;
n=b.size()-a.size();
if(n>0)
{
string c(n,'0');
a=c+a;
}
else if(n<0)
{
string c(-n,'0');
b=c+b;
}
//cout<<a<<' '<<b<<endl;
for(int i=a.size()-1;i>-1;i--)
{
    if((a.size()-i)%2)
    {
        n=a[i]+b[i]-'0'*2;
        n=n%13;
        switch(n)
        {
        case 10:a[i]='J';break;
        case 11:a[i]='Q';break;
        case 12:a[i]='K';break;
        default:a[i]=n+'0';
        }
    }
    else
    {
        n=b[i]-a[i];
        if(n<0)
            n+=10;
        a[i]=n+'0';
    }
}
cout<<a<<endl;
return 0;
}
