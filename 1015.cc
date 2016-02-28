/*
题目看清楚 当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
*/

#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
//#define LOCAL
using namespace std;
struct Student
{
int num;
int df;
int cf;
int sum;

Student(int str,int rhs,int lhs):num(str),df(rhs),cf(lhs),sum(rhs+lhs){}
/*bool operator < (const Student& stu) const
{
    	return this->sum>stu.sum;
}
*/
bool operator < (const Student &A) const{
		if (df + cf != A.df + A.cf)
			return df + cf > A.df + A.cf;
		else{
			if (df != A.df)
				return df > A.df;
			else
				return num < A.num;
		}
	}

};


int main()
{
#ifdef LOCAL
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
vector<Student> vec_stu[4];
int L,H,num,count=0;
int snum;
int df,cf;
cin>>num>>L>>H;
for(int i=0;i<num;i++)
{
   cin>>snum>>df>>cf;
   Student stu(snum,df,cf);
   if(df>=L&&cf>=L)
   {
    count++;
    if(df>=H&&cf>=H)
    {
       vec_stu[0].push_back(stu);
    }
   else if(df>=H&&cf<H)
   {
       vec_stu[1].push_back(stu);
   }
   else if(df<H&&cf<H&&df>=cf)
   {
       vec_stu[2].push_back(stu);
   }
   else
   {
       vec_stu[3].push_back(stu);
   }

   }

}

cout<<count<<endl;
for(int i=0;i<4;i++)
{
  //cout<<vec_stu[i].size()<<endl;
  stable_sort(vec_stu[i].begin(),vec_stu[i].end());
for(vector<Student>::iterator it=vec_stu[i].begin();it!=vec_stu[i].end();it++)
       printf("%d %d %d\n", it->num, it->df, it->cf);
}
return 0;
}
