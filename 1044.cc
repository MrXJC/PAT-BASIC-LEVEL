/*
���Ե������ ��Ҫ���Ե���13 ��Ӧ����tam ������ tam tret
����getline �Ƕ����س���
����һ����������
2   cin>>t ; ��ʱt��ȡΪ2
1   getline(cin,str);  ��ʱstrΪ�� ����Ҫ�� cin.get();���ջس���;
*/

#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
string g[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string s[13]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
void num2mars(string str)
{
    int num;
    stringstream is(str);
    is>>num;
    if(num/13)
    {
      cout<<s[num/13];
      if(num%13)
      cout<<' '<<g[num%13]<<endl;
      else
      cout<<endl;
    }
    else
    cout<<g[num%13]<<endl;
}
void mars2num(string str)
{
   string num;
   stringstream is(str);
   int t=0;
   if(str.size()>4)
   {   is>>num;
       for(int i=1;i<13;i++)
       {
           if(s[i]==num)
           {
               t+=i*13;
           }
       }
   }
    is>>num;
    for(int i=0;i<13;i++)
    {
        if(g[i]==num)
        {
          cout<<t+i<<endl;
        }
    }

    for(int i=1;i<13;i++)
    {
        if(s[i]==num)
        {
          cout<<t+i*13<<endl;
        }
    }
}
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
string str;
int t;
cin>>t;
cin.get();
while(t--)
{
    getline(cin,str);
    if(str.size())
    if(str[0]>='0'&&str[0]<='9')
        num2mars(str);
    else if(isalpha(str[0]))
        mars2num(str);
}
return 0;
}
