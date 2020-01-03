//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<assert.h>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[10001];
void Swap(int * array, int  i, int  j)  
{  
    assert(array);  
    int  tmp;  
    tmp = array[j];  
    array[j] = array[i];  
    array[i] = tmp;  
}
void MinHeapify(int * array, int  heapSize, int  currentNode)  
{  
    int  leftChild, rightChild,  minimum;  //左、右孩子下标；三者最小元素下标
    leftChild = 2*currentNode + 1;  //当前结点的做左孩子
    rightChild = 2*currentNode + 2; //当前结点的做右孩子 
    if(leftChild < heapSize && array[leftChild] < array[currentNode])  
        minimum = leftChild;  //有左孩子并且左孩子较小
    else  
        minimum = currentNode;  
    if(rightChild < heapSize && array[rightChild] < array[minimum])  
        minimum = rightChild; //有右孩子并且右孩子是三者最小的 
    if(minimum != currentNode)  
    {//    当前结点不是最小的，需要交换
        Swap(array, minimum, currentNode);  
        MinHeapify(array, heapSize, minimum);  //子节点需要重新递归调整
    }  
}  
void MinHeapCreate(int * array, int  heapSize)  
{  
    int i;  
    for(i = heapSize/2; i >= 0; i--)  
    { //需要从最后一个非叶节点开始调整
        MinHeapify(array, heapSize, i);  
    }  
}

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
    MinHeapCreate(a,n); /*一次堆调整*/
    //Swap(a,0,n-1);    /*将最小值依次存储在数组后端*/
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
 	return 0;
}

