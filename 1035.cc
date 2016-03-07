#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
int a[100],b[100],c[100];
bool flag=false;
bool ArrayEqual(int *a,int* b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}
void InsertSort(int R[],int n)
{
    int i,j,temp;
    for(int i=1;i<n;i++)
    {
        temp=R[i];
        j=i-1;
        while(j>=0&&temp<R[j])
        {
            R[j+1]=R[j];
            --j;
        }
        R[j+1]=temp;
        if(flag)
        {
            cout<<"Insertion Sort"<<endl;
            int t;
            for(t=0;t<n-1;t++)
            {
              cout<<R[t]<<' ';
            }
            cout<<R[t]<<endl;
            return ;
        }
        if(ArrayEqual(R,b,n)&&!flag)
        {
            flag=true;
        }

    }
}

void mergearray(int a[], int first, int mid, int last, int temp[])
{
	int i = first, j = mid + 1;
	int m = mid,   n = last;
	int k = 0;

	while (i <= m && j <= n)
	{
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}

	while (i <= m)
		temp[k++] = a[i++];

	while (j <= n)
		temp[k++] = a[j++];

{

}	for (i = 0; i < k; i++)
		a[first + i] = temp[i];
}

void Merge(int arr[],int low,int mid,int high)//�ݹ�ͷǵݹ��һ��
{//�������������鲢Ϊһ��������
	int i=low,j=mid+1,k=0;
	int *temp=new(nothrow) int[high-low+1];
	while(i<=mid&&j<=high)
	{
		if(arr[i]<=arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	while(i<=mid) temp[k++]=arr[i++];
	while(j<=high) temp[k++]=arr[j++];
	for(i=low,k=0;i<=high;i++,k++)
		arr[i]=temp[k];
	delete []temp;
}

void MergeSort(int arr[],int n)//�����͵ݹ��Բ�ͬ��n����������Ԫ�ظ���������������±���n-1
{//�ǵݹ�ʵ��
	int size=1,low,mid,high;
	while(size<=n-1)
	{
		low=0;
		while(low+size<=n-1)
		{
			mid=low+size-1;
			high=mid+size;
			if(high>n-1)//�ڶ������и�������size
				high=n-1;
			Merge(arr,low,mid,high);//���ù鲢�Ӻ���
			low=high+1;//��һ�ι鲢ʱ��һ�����е��½�
		}
		size*=2;//��Χ����һ��
		if(flag)
        {
            cout<<"Merge Sort"<<endl;
            int t;
            for(t=0;t<n-1;t++)
            {
              cout<<arr[t]<<' ';
            }

            cout<<arr[t]<<endl;
            return ;
        }
        if(ArrayEqual(arr,b,n)&&!flag)
        {
            flag=true;
        }
	}
}


int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("input.txt", "r", stdin);
#endif
int t;
cin>>t;
for(int i=0;i<t;i++)
{
     cin>>a[i];
    c[i]=a[i];
}
for(int i=0;i<t;i++)
{
     cin>>b[i];
}
InsertSort(a,t);
if(!flag)
MergeSort(c,t);
return 0;
}
