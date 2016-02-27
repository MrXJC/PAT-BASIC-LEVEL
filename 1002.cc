/**
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san w
*/
#include<iostream>
#include<cstring>
#include<cstdio>
#include<stack>
using namespace std;
void printNum2Chinese(int num)
{
    switch(num)
    {
        case 1:cout<<"yi";break;
        case 2:cout<<"er";break;
        case 3:cout<<"san";break;
        case 4:cout<<"si";break;
        case 5:cout<<"wu";break;
        case 6:cout<<"liu";break;
        case 7:cout<<"qi";break;
        case 8:cout<<"ba";break;
        case 9:cout<<"jiu";break;
        case 0:cout<<"ling";break;
    }

}
int main()
{
int sum=0;
string str;
cin>>str;
stack<int> mystack;
for(int i=0;i!=str.size();i++)
{
   sum=sum+str[i]-'0';
}
if(sum==0)
{
cout<<"ling"<<endl;
return 0;
}
while(sum)
{
    mystack.push(sum%10);
    sum=sum/10;
}

while (!mystack.empty())
{
     printNum2Chinese(mystack.top());
     mystack.pop();
     if(!mystack.empty())
        cout<<' ';
}
cout<<endl;
return 0;
}