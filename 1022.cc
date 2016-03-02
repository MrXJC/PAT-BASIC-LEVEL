#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
stack<int> st;
long int a,b;
int d;
cin>>a>>b>>d;
a=a+b;
do
{
st.push(a % d);
a = a / d;
}
while(a);

while(!st.empty())
{
    cout<<st.top();
    st.pop();
}

cout<<endl;
return 0;
}


