#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[6]={0};

int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
string str;
cin>>str;
for(auto w:str)
{
    if(w=='P')
    a[0]++;
    else if(w=='A')
    a[1]++;
    else if(w=='T')
    a[2]++;
    else if(w=='e')
    a[3]++;
    else if(w=='s')
    a[4]++;
    else if(w=='t')
    a[5]++;
}
do
{
    if(a[0])
    {
        a[0]--;
        cout<<'P';
    }
    if(a[1])
    {
        a[1]--;
        cout<<'A';
    }
     if(a[2])
    {
        a[2]--;
        cout<<'T';
    }
     if(a[3])
    {
        a[3]--;
        cout<<'e';
    }
     if(a[4])
    {
        a[4]--;
        cout<<'s';
    }
     if(a[5])
    {
        a[5]--;
        cout<<'t';
    }

}
while(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]!=0);
cout<<endl;

return 0;
}
