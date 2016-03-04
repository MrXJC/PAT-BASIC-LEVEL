/*
typedef pair<int, int> FT; .first .second访问
std::reverse 逆置
用空间换时间 开个数组
*/

#include<iostream>
#include<vector>
#include<algorithm>
//#include<iterator>
//#include<utility>
using namespace std;
typedef pair<int, int> FT;
vector<FT> ft(100000);
struct node
{
    int adress;
    int data;
    int next;
    node(int a, int b, int c) :adress(a), data(b), next(c){};
};
vector<node> listnode;
int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
    int adress, data, next;
    int n, k, first;
    scanf("%d%d%d", &first, &n, &k);
    int num = n;
    while (n--)
    {
            scanf("%d%d%d", &adress, &data, &next);
            FT p;
            p.first = data;
            p.second = next;
            ft[adress] = p;
    }
    int index = first;
    while (index != -1)
    {
        listnode.push_back(node(index, ft[index].first, ft[index].second));
        index = ft[index].second;
    }
     n = listnode.size() / k;
    for (int i = 0; i < n; i++)
        std::reverse(listnode.begin() + i*k, listnode.begin() + (i + 1)*k);

    for (int i = 0; i < listnode.size()-1;i++)
    {
        printf("%05d %d %05d\n", listnode[i].adress, listnode[i].data, listnode[i + 1].adress);
    }
    printf("%05d %d %d\n", listnode[listnode.size() - 1].adress, listnode[listnode.size() - 1].data, -1);


    return 0;
}
