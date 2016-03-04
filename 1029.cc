#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
string right;
string wrong;
bool a[128]={0};
cin>>right;
cin>>wrong;
for(auto w:wrong)
{

   if(isalpha(w))
   a[(int)toupper(w)]=true;
   if(isdigit(w))
   a[(int)w]=true;
   if(w=='_')
   a[(int)w]=true;

}
for(auto w:right)
{
    if(isalpha(w))
    {
    if(!a[(int)toupper(w)])
         {
             a[(int)toupper(w)]=true;
             cout<<(char)toupper(w);
         }
    }
    if(isdigit(w))
    {
        if(!a[(int)w])
         {
             a[(int)w]=true;
             cout<<(char)w;
         }
    }
    if(w=='_'&&!a[(int)w])
    {
       a[(int)w]=true;
       cout<<'_';
    }
}
cout<<endl;
return 0;
}
