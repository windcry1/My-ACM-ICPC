/*C++读写文件测试*/
#include<iostream>
#include<cstring>
#include<fstream>//读写头文件 
#include<algorithm>//算法头文件 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[40],n;
    string filepath="text.txt";
    ifstream pin;//ifstream,ofstream都是类名，定义的pin，put就是一个类的变量，通过该变量可以替代cin,cout进行输入，输出
    ofstream put;
    put.open(filepath.c_str(), ios::app);
    pin.open("text.txt",ios::in);
    pin>>n;//从文件中读入n
    for(int i=0;i<n;i++) pin>>arr[i];//从文件中读入各个数
//    int n=sizeof(arr)/sizeof(arr[0]);//注意strlen是统计字符数组的长度，而不能统计char类型, 
//    cout<<n;
    sort(arr,arr+n);//利用algorithm中的库函数 
    for(int i=0;i<n;i=i+2){
        if(arr[i]!=arr[i+1]){
            put<<endl;
            put<<setw(6)<<setfill('*')<<arr[i]<<endl;//将arr[i]写入filepath下的文件中 
            break;
        }
    }
    double k = 192.9773;
    put<<setprecision(6)<<k<<endl;
    return 0;
}
