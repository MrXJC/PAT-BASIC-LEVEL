#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<sstream>
#define LOCAL
using namespace std;
int main()
{
#ifdef LOCAL
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
char sign,dir,ch,b[10001],zhi[10001];
int ex,a,i;
int length;
scanf("%c%d.%[^E]E%c%s",&sign,&a,b,&dir,zhi);
stringstream io;
io<<zhi;
io>>ex;
if(sign=='-')
    cout<<"-";

if(ex==0){
		printf("%d.",a);
	    printf("%s\n",b);
		return 0;
}
if(dir=='+')
{
    int len;
	len = strlen(b);
	printf("%d",a);
	if(len<=ex){
		printf("%s",b);
		for(i=0;i<ex-len;++i)printf("0");
		printf("\n");
	}else{
		for(i=0;i<ex;++i){
			printf("%c",b[i]);
		}
		printf(".");
		printf("%s\n",b+ex);
	}
}
else
{

	printf("0.");
	for(i=0;i<ex-1;++i){
		printf("0");
	}
	printf("%d",a);
	printf("%s\n",b);
}

return 0;
}
