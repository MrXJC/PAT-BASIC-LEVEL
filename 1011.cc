#include<iostream>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
   int n;
   ostringstream s1;
   string s2;
   fstream file;
   for(int i=1;i<51;i++)
   {
       n=1000+i;
       s1.str("");
       s1 <<n<<".cc";
       s2 = s1.str();
       file.open(s2,ios::app);
       file.close();
   }


    return 0;
}
