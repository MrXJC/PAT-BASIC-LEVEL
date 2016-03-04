/**
考虑周全也许全部都不合格 就没有什么可以输出的了
*/
#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
    int year;
    int month;
    int day;
    int t;
    string name;
    string theOld;
    string theYoung;
    int max=0;
    int min=20140906;
    cin>>t;
    int valid=0;
    while(t--)
    {
        cin>>name;
        scanf("%d/%d/%d",&year,&month,&day);
        int old=year*10000+month*100+day;
        if(old>18140905&&old<20140907)
        {
           valid++;
          if(max<old)
          {
              max=old;
              theYoung=name;
          }

          if(min>old)
          {
              min=old;
              theOld=name;
          }

        }
    }
    if(valid)
    cout<<valid<<' '<<theOld<<' '<<theYoung<<endl;
    else
    cout<<'0'<<endl;
return 0;
}
