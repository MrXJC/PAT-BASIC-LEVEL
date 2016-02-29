#include<iostream>
#include<algorithm>
#include<string>
//#define LOCAL
using namespace std;
int main()
{
#ifdef LOCAL
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
    string a;
    int b,r,sum=0;
    cin>>a>>b;
    int i;
    if(a.size()==1&&(a[0]-'0')<b)//忘了1 除以 7 商为0的情况
    {
        cout<<"0 "<<(a[0]-'0');
        return 0;
    }


    for(i=0;i<a.size();i++)
    {
        sum=sum*10+a[i]-'0';
        if(sum>=b)
        {
            cout<<sum/b;
            sum=sum%b;
        }
        else if(i>0)//除不尽 除了第一位以外 要自动填0
        {
            cout<<'0';
        }

    }

    cout<<' '<<sum<<endl;
   return 0;
}
