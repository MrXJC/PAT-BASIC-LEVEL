/**
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
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