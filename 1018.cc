#include<iostream>
#include<vector>
#include<cstdio>
#define LOCAL
using namespace std;
int pk(char one,char two)
{
    if(one=='C'&&two=='J')
    {
        return 2;
    }
    else if(one=='C'&&two=='B')
    {
        return 4;
    }
    else if(one=='J'&&two=='C')
    {
        return 5;
    }
    else if(one=='J'&&two=='B')
    {
        return 3;
    }
    else if(one=='B'&&two=='C')
    {
        return 1;
    }
    else if(one=='B'&&two=='J')
    {
        return 6;
    }
    else
        return  0;


}

/*
0       1 2 3 4 5 6
ping    b c j b c j

1+2+3 0 4+5+6
4+5+6 0 1+2+3

*/
int main()
{
#ifdef LOCAL
freopen("input.txt", "r", stdin);
#endif
    int t;
    int a[7]={0};
    string str="ABCJBCJ";
     cin>>t;
    char one,two;
    while(t--)
    {
        cin>>one>>two;
        a[pk(one,two)]++;
    }
cout<<a[1]+a[2]+a[3]<<" "<<a[0]<<" "<<a[4]+a[5]+a[6]<<endl;
cout<<a[4]+a[5]+a[6]<<" "<<a[0]<<" "<<a[1]+a[2]+a[3]<<endl;

int max;
max=0;
t=1;
int i=1;
for(; i<4 ;i++)
{
    if(max<a[i])
    {
        t=i;
        max=a[i];
    }
}

cout<<str[t]<<" ";
max=0;
t=4;
for(; i<7 ;i++)
{
    if(max<a[i])
    {
        t=i;
        max=a[i];
    }
}
cout<<str[t]<<endl;


return 0;

}
