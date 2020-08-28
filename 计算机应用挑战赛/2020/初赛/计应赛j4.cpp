#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct v{
	int a[1010];
	int length=0;
}vector;
int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}
int a[100010],b[100010];
void Merge(int array[], int left, int m, int right)
{
    int aux[100010] = {0};
    int i;
    int j;
    int k;
    for (i = left, j = m+1, k = 0; k <= right-left; k++){
        if (i == m+1){
            aux[k] = array[j++];
            continue;
        }
        if (j == right+1){
            aux[k] = array[i++];
            continue;
        }
        if (array[i] < array[j])
            aux[k] = array[i++];
		else
            aux[k] = array[j++];
    }
    for (i=left,j=0;i<=right;i++,j++)
        array[i]=aux[j];
}
void MergeSort(int array[], int start, int end){
    if (start<end){
        int i;
        i=(end+start)>>1;
        MergeSort(array, start, i);
        MergeSort(array, i + 1, end);
        Merge(array, start, i, end);
    }
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
	MergeSort(a,0,n-1);
	MergeSort(b,0,n-1);
	i=0;j=0;
	while(i<n&&j<n){
		if(j<n&&a[j]<a[i]){
			j++;
		}
		i++;
	}
	printf("%d\n",j);
	return 0;
}
