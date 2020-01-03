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

/*小根堆调整*/  
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
/*构建小根堆*/  
void MinHeapCreate(int * array, int  heapSize)  
{  
    int i;  
    for(i = heapSize/2; i >= 0; i--)  
    { //需要从最后一个非叶节点开始调整
        MinHeapify(array, heapSize, i);  
    }  
}  

/*大根堆调整*/  
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
  
/*构建大根堆*/  
void MaxHeapCreate(int * array, int  heapSize)  
{  /*注意:这里只是经过一次堆调整之后,并不是将这些数完全用堆排序完成排序*/

    int i;  
    for(i = heapSize/2; i >= 0; i--)  
    {  
        MaxHeapify(array, heapSize, i);  
    }  
}  
  
int main()  
{  
    int  tmp;  
    int  array[] = {6, 1, 14, 7, 5, 8}; //源数据
    int *res = array;    /*用于输出*/
    
    int i, heapSize = sizeof(array)/sizeof(int );  
   
    printf("Source data:\n");  
    for(i = 0; i < heapSize; i++)  
    {  
        printf("%d\t", array[i]);  
    }  
    printf("\n");  
    
    /*构建一次小根堆并输出, 每次找出最小结点*/ 
    for(i = heapSize; i > 1; --i)
    {
        MinHeapCreate(array, i); /*一次堆调整*/
        Swap(array, 0, i - 1);    /*将最小值依次存储在数组后端*/
    }
    
    printf("Output the MinHeap:\n");  
    for(i = 0; i < heapSize; i++)  
    {  
        printf("%d\t", array[i]);  
    }  
    printf("\n");  
    
    /*构建大根堆并输出, 每次堆调整找出最大结点*/  
    for(i = heapSize; i > 1; --i)
    {
        MaxHeapCreate(array, i); /*一次堆调整*/
        Swap(array, 0, i - 1);    /*将最大值依次存储在数组后端*/
    }

    printf("Output the MaxHeap:\n");  
    for(i = 0; i < heapSize; i++)  
    {  
        printf("%d\t", array[i]);  
    }    
    return 0;  
}
