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
return 0;
}
