#include<windows.h>  
#include<iostream>  
using namespace std;  
int main()  
{  
        double time=0;  
        double counts=0;  
        LARGE_INTEGER nFreq;  
   	 LARGE_INTEGER nBeginTime;  
    	LARGE_INTEGER nEndTime;  
    	QueryPerformanceFrequency(&nFreq);  
        QueryPerformanceCounter(&nBeginTime);//��ʼ��ʱ  
        for(int i=0;i<1000000000;i++)  
        {  
            counts++;  
        }  
        QueryPerformanceCounter(&nEndTime);//ֹͣ��ʱ  
        time=(double)(nEndTime.QuadPart-nBeginTime.QuadPart)/(double)nFreq.QuadPart;//�������ִ��ʱ�䵥λΪs  
        cout<<"����ִ��ʱ�䣺"<<time<<"s"<<endl;  
}
