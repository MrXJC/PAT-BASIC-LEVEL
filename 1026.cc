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
int start,end,diff;
cin>>start>>end;
int hh,mm,ss;
hh=mm=ss=0;
diff=((end-start)+50)/100;
hh=diff/3600;
mm=diff%3600/60;
ss=diff%60;
printf("%02d:%02d:%02d",hh,mm,ss);
return 0;
}
