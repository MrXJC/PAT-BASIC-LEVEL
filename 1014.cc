/**
做的时刻 读题要清晰
*/

#include<iostream>
#include<cstring>
#include<algorithm>
#include <cctype>
#include<stdio.h>
#define LOCAL
using namespace std;
void switchweek(char week)
{
    switch(week)
    {
        case 'A'+0:cout<<"MON " ;break;
        case 'A'+1:cout<<"TUE " ;break;
        case 'A'+2:cout<<"WED " ;break;
        case 'A'+3:cout<<"THU " ;break;
        case 'A'+4:cout<<"FRI " ;break;
        case 'A'+5:cout<<"SAT " ;break;
        case 'A'+6:cout<<"SUN " ;break;
    }

}
void switchhour(char hour)
{
    int hh;
    if(isdigit(hour))
    {
        hh=hour-'0';
    }
    else
    {
         hh=hour-'A'+10;
    }

    printf("%02d:",hh%24);
}
int main()
{
    #ifdef LOCAL
      freopen("input.txt", "r", stdin);
     // freopen("output.txt", "w", stdout);
     #endif
    string str[4];
    int count =2;
    char DAY,HH;
    int MM;
    int i;
    for(i=0;i<4;i++)
        cin>>str[i];
    i=0;
    while(count)
    {

        if(str[0][i]==str[1][i])
        {
           //cout<<str[0][i];
           if(count>1&&(str[0][i]<='G'&&str[0][i]>='A'))
           {

               DAY=str[0][i];
               count--;
           }
           else if(count<2&&((str[0][i]<='N'&&str[0][i]>='A')||isdigit(str[0][i])))
           {
            HH=str[0][i];
           count--;
           }

        }
        i++;
    }
    i=0;
   while(1)
   {
       if(str[2][i]==str[3][i]&&isalpha(str[3][i]))
           break;
           ++i;
   }

    MM=i;
    switchweek(DAY);
    switchhour(HH);
    printf("%02d\n",MM);
    return 0;
}















