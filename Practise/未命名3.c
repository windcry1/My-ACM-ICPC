#include <stdio.h>
int main() 
{ 
    int year = 2008;
    int month = 8;
    int day = 8;
    if(month>=2 && year%4==0)
    {
        day+=29;
    }
    else if(month>=2 && year%4!=0)
    {
        day+=28;
    }
    switch(month)
    {
        case 1:
        day=day+31;
        break;
        case 2:
        day=day+31;
        break;
        case 3:
        day=day+31*2;
        break;
        case 4:
        day=day+31*2+30;
        break;
        case 5:
        day=day+31*3+30;
        break;
        case 6:
        day=day+31*3+30*2;
        break;
        case 7:
        day=day+31*4+30*2;
        break;
        case 8:
        day=day+31*5+30*2;
        break;
        case 9:
        day=day+31*5+30*3;
        break;
        case 10:
        day=day+31*6+30*3;
        break;
        case 11:
        day=day+31*6+30*4;
        break;
        case 12:
        day=day+31*7+30*4;
        break;
    }
    printf("%d",day);
    return 0;
}







