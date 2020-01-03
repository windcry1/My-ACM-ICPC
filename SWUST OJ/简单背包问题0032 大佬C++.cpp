#include <iostream>
using namespace std;
int data[1005];     //纪录每件物品的重量，下标及是物品的编号
int beibao(int weight,int n)      //取物品放背包的程序,其实是假设背包的重量已经是weight这么多，一点一点往外拿，从n号，拿到1号
{
    if (weight==0) 
	{              //背包正好被取空了～返回1
        return 1;
    }
    if (n==0&&weight!=0) 
	{         //所有的物品都取出来了，可是背包的重量依然不为0，说明这些物品和背包一点都不匹配，差评
        return 0;
    }
    if (beibao(weight, n-1)==1) 
	{  //假设第n个物品并没有被取出来，我们直接往下进行，取第n－1号物品，如果成功了就返回1
        return 1;
    }
    return beibao(weight-data[n], n-1);  //假设第n－1个物品取出来了，我们依然往下取，取第n－1号物品
}
int main() 
{
    int weight,num;
    while (cin>>weight>>num) {
        int i;
        for (i=1; i<=num; i++) {
            cin>>data[i];
        }
        if(beibao(weight,num)==1)   //成功返回1
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
