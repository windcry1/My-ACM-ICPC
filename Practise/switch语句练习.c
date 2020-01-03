#include <stdio.h>
int main() 
{
    int score = 87; 
    score/=10;
    switch(score)/*因为score作为int变量，向下取整，所以运用这个来简化代码*/ 
    {
        case 10:
        case 9:
            printf("等级A");
            break;
        case 8:
            printf("等级B");
            break;                            
        case 7:
        case 6: 
            printf("等级C");
            break;                 
        default:
            printf("等级D");
            break;    
    }
    return 0;
}
