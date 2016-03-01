//题目中没说出来是否都为 整数测试点2
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define LOCAL
using namespace std;
struct Mooncake
{
float num;
float price;
float per;

Mooncake(float num=0,float price=0):num(num),price(price),per(price*1.0/num){}

bool operator < (const Mooncake &A) const{
          return per>A.per;
		}

};


int main()
{

int t,mid;
float sum;
float price=0;
float a[2222];
vector<Mooncake> cake;
cin>>t>>sum;
mid=t;
t=2*t;
while(t--)
{
    cin>>a[t];
}
t=mid;
while(t--)
{
    Mooncake mooncake(a[t+mid],a[t]);
    cake.push_back(mooncake);
}
sort(cake.begin(),cake.end());
t=0;
while(t!=mid&&sum>cake[t].num)
{
    sum-=cake[t].num;
    price=price+cake[t].price;
    t++;
}

if(t!=mid)
price+=sum*cake[t].per;

printf("%.2f\n",price);
return 0;
}
