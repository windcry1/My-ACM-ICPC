//
//  main.cpp
//  大整数乘法
//
//  Created by Miu on 16/11/30.
//  Copyright ? 2016年 XB. All rights reserved.
//

#include <iostream>
using namespace std;
void swapNum(int& num1, int& num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 -num2;
}

void reverseArray(int nums[], int length)
{
    int begin = 0;
    int end = length - 1;
    while (begin < end) {
        swapNum(nums[begin++], nums[end--]);
    }
}

void outNums(int nums[], int count)
{
    for (int i = 0; i < count; i++) {
        cout << nums[i];
    }
    cout << endl;
}

int multi(int num1[], int length1, int num2[], int length2)
{
    reverseArray(num1, length1);
    reverseArray(num2, length2);


    int retLength = length1+length2;
    int *ret = new int(retLength);
    memset(ret, 0, sizeof(int)*retLength);
    for (int i=0; i < length1; i++) {
        int k = i;
        for (int j = 0; j < length2; j++) {
            ret[k++] += num1[i] * num2[j];
        }
    }
    for (int i = 0; i < retLength; i++) {
        if (ret[i] > 10) {
            ret[i+1] += ret[i]/10;
            ret[i] = ret[i]%10;
        }
    }

    //逆序
    reverseArray(ret, retLength);

    //结果位数不足时, 数组第一元素可能为0, 需要清除
    if (ret[0] == 0) {
        for (int i = 0; i < retLength-1; i++) {
            ret[i] = ret[i+1];
        }
        retLength -= 1;
    }

    outNums(ret,retLength);
}

int main(int argc, const char * argv[]) {
    int a[10000];
    int b[10000];
    int c[10000];
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(int i=0;i<s1.length();i++)
		a[i]=s[i]-'0';
	for(int i=0;i<s2.length();i++)
		b[i]=s[i]-'0'; 
    multi(multi(a, s1.length(), b, s2.length());

    return 0;
}

