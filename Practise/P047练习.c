#include <stdio.h>
int main()
{
    //������λ��num,��λ��sd,ʮλ��td,��λ��hd
    int num, sd=0, td=0, hd=0;
    //ѭ��������λ��
    for(num=100;num<=999; num++)
    {
        //��ȡ��λ����num��λ�ϵ�����
        hd =num/100;
        //��ȡ��λ����numʮλ�ϵ�����
        td =(num-hd*100)/10    ;
        //��ȡ��λ����num��λ�ϵ�����
        sd =num%10 ;
        //ˮ�ɻ�����������ʲô��
        if( num=hd*hd*hd+td*td*td+sd*sd*sd     ) 
        {
            printf("ˮ�ɻ����֣�%d\n", num);    
        }
    }
    return 0;    
}
