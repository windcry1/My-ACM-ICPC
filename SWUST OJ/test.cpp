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
        QueryPerformanceCounter(&nBeginTime);//开始计时  
        for(int i=0;i<1000000000;i++)  
        {  
            counts++;  
        }  
        QueryPerformanceCounter(&nEndTime);//停止计时  
        time=(double)(nEndTime.QuadPart-nBeginTime.QuadPart)/(double)nFreq.QuadPart;//计算程序执行时间单位为s  
        cout<<"程序执行时间："<<time<<"s"<<endl;  
}
