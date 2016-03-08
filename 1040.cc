/*
思路很棒 通过统计P的个数 决定PA的个数,再决定PAT的个数
*/
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
string a;
int numP=0,numPA=0,numPAT=0;
cin>>a;
for(int i=0;i<a.size();i++)
{
    if(a[i]=='P')
    {
        numP++;
    }
    else if(a[i]=='A')
    {
       numPA=(numPA+numP)%1000000007;
    }
    else if(a[i]=='T')
    {
      numPAT=(numPAT+numPA)%1000000007;
    }

}
cout<<numPAT<<endl;
return 0;
}
