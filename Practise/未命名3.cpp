/*C++��д�ļ�����*/
#include<iostream>
#include<cstring>
#include<fstream>//��дͷ�ļ� 
#include<algorithm>//�㷨ͷ�ļ� 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[40],n;
    string filepath="text.txt";
    ifstream pin;//ifstream,ofstream���������������pin��put����һ����ı�����ͨ���ñ����������cin,cout�������룬���
    ofstream put;
    put.open(filepath.c_str(), ios::app);
    pin.open("text.txt",ios::in);
    pin>>n;//���ļ��ж���n
    for(int i=0;i<n;i++) pin>>arr[i];//���ļ��ж��������
//    int n=sizeof(arr)/sizeof(arr[0]);//ע��strlen��ͳ���ַ�����ĳ��ȣ�������ͳ��char����, 
//    cout<<n;
    sort(arr,arr+n);//����algorithm�еĿ⺯�� 
    for(int i=0;i<n;i=i+2){
        if(arr[i]!=arr[i+1]){
            put<<endl;
            put<<setw(6)<<setfill('*')<<arr[i]<<endl;//��arr[i]д��filepath�µ��ļ��� 
            break;
        }
    }
    double k = 192.9773;
    put<<setprecision(6)<<k<<endl;
    return 0;
}
