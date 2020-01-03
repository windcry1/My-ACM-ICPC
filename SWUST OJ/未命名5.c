#include <stdio.h>
#include <string.h>
int main()
{
    unsigned a1[200] = {0}, a2[200] = {0};
    char s1[200] = {'0'}, s2[200] = {'0'}, s[200] = {'0'};
    int j = 0, a, b, max,i;
    gets(s1);
    gets(s2);
     a = strlen(s1), b = strlen(s2);
    max = b;if (a >= b) max = a;
    for ((strlen(s1) - 1); i >= 0; --i)
        a1[j++] = s1[i] - '0';
    j = 0;
    for ((strlen(s2) - 1); i >= 0; --i)
        a2[j++] = s2[i] - '0';
  for (j = 0; j != max; ++j)
    {
        s[j] = (s[j] - '0' + (a1[j]+a2[j])%10 + '0');
	s[j+1] =(a1[j]+a2[j])/10+'0';
        if (s[j] == 58) { s[j] = '0'; s[j+1]++;}
    }
    if (s[j] != '0') max++;
    for (j = max-1; j >= 0; --j)
        puts(s);
    return 0;
}
