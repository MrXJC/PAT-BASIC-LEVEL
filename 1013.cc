#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    bool flag=1;
    bool vis[500000];//范围没有很好的确定
    memset(vis,1,500000);
    int num=0;
    int n,m;
    cin>>n>>m;
    for(int i=2;i<500000;i++)
    {
        if(vis[i])
        {
           num++;
           if(num>=n&&num<m)
           {
           if((num-n+1)%10)
           cout<<i<<" ";
           else
           cout<<i<<endl;
           }
           else if(num>=m)
           {
            cout<<i<<endl;
            break;
           }
        }
        for(int j=i*2;j<500000;j+=i)
            vis[j]=0;
    }


    return 0;
}
