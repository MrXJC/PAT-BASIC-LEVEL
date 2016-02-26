#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int num,count=0;
scanf("%d",&num);
while(num!=1)
{
    if(num%2)
    {
        num=(num*3+1)/2;
    }
    else
    {
        num=num/2;
    }
    count++;
}
cout<<count<<endl;
return 0;
}
