#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue>
#include <string.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Node
{
    int d[2009];
    int len;

    Node() {memset(d, 0, sizeof(d));}
    Node(char *s)
    {
        memset(d, 0, sizeof(d));
        int i = 0;
        while(s[i] != '\0')
        {
            d[i] = s[i] - '0';
            ++i;
        }
        len = i;
        for(int i=0,j=len-1; i<j; i++,j--)
            swap(d[i],d[j]);
    }

    Node operator * (const Node &t) const
    {
        Node ans;
        for(int i=0;i<this->len;i++)
        {
            for(int j=0;j<t.len;j++)
            {
                ans.d[i+j] += this->d[i] * t.d[j];
            }
        }
        for(int i=0;i<this->len+t.len;i++)
        {
            ans.d[i+1] += ans.d[i] / 10;
            ans.d[i] %= 10;
        }
        int len = this->len+t.len;
        while(len > 1 && ans.d[len-1] == 0)
            len--;
        ans.len = len;
        return ans;
    }

};

char str[1009];

int main()
{
    scanf("%s",str);
    Node a(str);
    scanf("%s",str);
    Node b(str);
    Node ans = a * b;
    scanf("%s",str);
    Node c(str);
    ans = ans * c;
    for(int i=ans.len-1; i>=0; i--)
        printf("%d",ans.d[i]);
    return 0;
}
