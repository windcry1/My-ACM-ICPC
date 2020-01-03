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
    int  leftChild, rightChild,  minimum;  //���Һ����±ꣻ������СԪ���±�
    leftChild = 2*currentNode + 1;  //��ǰ����������
    rightChild = 2*currentNode + 2; //��ǰ�������Һ��� 
    if(leftChild < heapSize && array[leftChild] < array[currentNode])  
        minimum = leftChild;  //�����Ӳ������ӽ�С
    else  
        minimum = currentNode;  
    if(rightChild < heapSize && array[rightChild] < array[minimum])  
        minimum = rightChild; //���Һ��Ӳ����Һ�����������С�� 
    if(minimum != currentNode)  
    {//    ��ǰ��㲻����С�ģ���Ҫ����
        Swap(array, minimum, currentNode);  
        MinHeapify(array, heapSize, minimum);  //�ӽڵ���Ҫ���µݹ����
    }  
}  
void MinHeapCreate(int * array, int  heapSize)  
{  
    int i;  
    for(i = heapSize/2; i >= 0; i--)  
    { //��Ҫ�����һ����Ҷ�ڵ㿪ʼ����
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
    MinHeapCreate(a,n); /*һ�ζѵ���*/
    //Swap(a,0,n-1);    /*����Сֵ���δ洢��������*/
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
 	return 0;
}

