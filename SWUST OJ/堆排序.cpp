#include <stdio.h>  
#include <stdlib.h>  
#include <stdint.h>  
#include <assert.h>  
#include <string.h>   
  
void Swap(int * array, int  i, int  j)  
{  
    assert(array);  
    int  tmp;  
    tmp = array[j];  
    array[j] = array[i];  
    array[i] = tmp;  
}  

/*С���ѵ���*/  
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
/*����С����*/  
void MinHeapCreate(int * array, int  heapSize)  
{  
    int i;  
    for(i = heapSize/2; i >= 0; i--)  
    { //��Ҫ�����һ����Ҷ�ڵ㿪ʼ����
        MinHeapify(array, heapSize, i);  
    }  
}  

/*����ѵ���*/  
void MaxHeapify(int * array, int  heapSize, int  currentNode)  
{  
    int  leftChild, rightChild,  largest;  
    leftChild = 2*currentNode + 1;  
    rightChild = 2*currentNode + 2;  
    if(leftChild < heapSize && array[leftChild] > array[currentNode])  
        largest = leftChild;  
    else  
        largest = currentNode;  
    if(rightChild < heapSize && array[rightChild] > array[largest])  
        largest = rightChild;  
    if(largest != currentNode)  
    {  
        Swap(array, largest, currentNode);  
        MaxHeapify(array, heapSize, largest);  
    }  
}  
  
/*���������*/  
void MaxHeapCreate(int * array, int  heapSize)  
{  /*ע��:����ֻ�Ǿ���һ�ζѵ���֮��,�����ǽ���Щ����ȫ�ö������������*/

    int i;  
    for(i = heapSize/2; i >= 0; i--)  
    {  
        MaxHeapify(array, heapSize, i);  
    }  
}  
  
int main()  
{  
    int  tmp;  
    int  array[] = {6, 1, 14, 7, 5, 8}; //Դ����
    int *res = array;    /*�������*/
    
    int i, heapSize = sizeof(array)/sizeof(int );  
   
    printf("Source data:\n");  
    for(i = 0; i < heapSize; i++)  
    {  
        printf("%d\t", array[i]);  
    }  
    printf("\n");  
    
    /*����һ��С���Ѳ����, ÿ���ҳ���С���*/ 
    for(i = heapSize; i > 1; --i)
    {
        MinHeapCreate(array, i); /*һ�ζѵ���*/
        Swap(array, 0, i - 1);    /*����Сֵ���δ洢��������*/
    }
    
    printf("Output the MinHeap:\n");  
    for(i = 0; i < heapSize; i++)  
    {  
        printf("%d\t", array[i]);  
    }  
    printf("\n");  
    
    /*��������Ѳ����, ÿ�ζѵ����ҳ������*/  
    for(i = heapSize; i > 1; --i)
    {
        MaxHeapCreate(array, i); /*һ�ζѵ���*/
        Swap(array, 0, i - 1);    /*�����ֵ���δ洢��������*/
    }

    printf("Output the MaxHeap:\n");  
    for(i = 0; i < heapSize; i++)  
    {  
        printf("%d\t", array[i]);  
    }    
    return 0;  
}
