//Tip1: do...while 避免测试用例6174 不进入循环体
#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int up,down;
int main(){
    int x;
    int a[4];
    cin>>x;
  do{
    a[0] = x / 1000;
    a[1] = x / 100 % 10;
    a[2] = x / 10 % 10;
    a[3] = x % 10;
    sort(a, a + 4);
    down = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    up = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
    x=up-down;
    printf("%04d - %04d = %04d\n", up, down, x);
  }while(x!=0&&x!=6174);//Tip1
return 0;
}
