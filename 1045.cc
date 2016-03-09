/*
存两个数组
第一个数组排序
第二个数组保留
然后算一下 第一个数组的元素对应的第二个数组的此位置的元素(是否相等)之后到首元素 最大值 是不是 此元素 两者都满足 就是主元素
看别人BLOG所得
*/

#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N], arr_s[N];
    for(int i=0; i<N; ++i){
        scanf("%d", &arr[i]);
        arr_s[i] = arr[i];
    }
    qsort(arr_s, N, sizeof(int), comp);
    int max = 0, cnt =0;
    int mainnum[N];
    for(int i=0; i<N; ++i){
        if(arr[i] > max) max = arr[i];
        if(arr[i] == arr_s[i] && arr[i] == max){
            mainnum[cnt++] = arr[i];
        }
    }
    printf("%d\n", cnt);
    for(int i=0; i<cnt; ++i){
        if(i == 0) printf("%d", mainnum[i]);
        else printf(" %d", mainnum[i]);
    }
    printf("\n");
    return 0;
}
