#include <stdio.h>
int main() 
{
    int score = 87; 
    score/=10;
    switch(score)/*��Ϊscore��Ϊint����������ȡ������������������򻯴���*/ 
    {
        case 10:
        case 9:
            printf("�ȼ�A");
            break;
        case 8:
            printf("�ȼ�B");
            break;                            
        case 7:
        case 6: 
            printf("�ȼ�C");
            break;                 
        default:
            printf("�ȼ�D");
            break;    
    }
    return 0;
}
