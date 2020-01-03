#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cstdlib>
#define NAME ""
#define Point Vector
using namespace std;
const double eps=1e-8;
const int N=100000;
struct Vector
{
    double x,y;
    double len(){return sqrt(x*x+y*y);}
    double ang(){return atan2(y,x);}
    Vector(int a=.0,int b=.0):x(a),y(b){}
    Vector operator+(const Vector &s)const{return Vector(x+s.x,y+s.y);}
    Vector operator-(const Vector &s)const{return Vector(x-s.x,y-s.y);}
    Vector operator*(int s)const{return Vector(x*s,y*s);}
    Vector operator/(int s)const{return Vector(x/s,y/s);}
    bool operator<(const Point &s)const
    {
        if(s.x==x)return y<s.y;
        else return x<s.x;
    }
}p[N+5],ch[N+5];
double dis(Point a,Point b)
{
    Point c=b-a;
    return c.len();
}
double cross(Vector a,Vector b){return a.x*b.y-a.y*b.x;}//ÏòÁ¿²æ»ý 
int sign(double a){return a>eps?1:(a<-eps?-1:0);}
bool onleft(Point a,Point b,Point p)
{
    return sign(cross(b-a,p-a))>0;
}
double ComvexHull(Point* p,int n,Point* ch)
{
    sort(p+1,p+n+1);
    int m=0;
    for(int i=1;i<=n;++i)
    {
        while(m>1&&cross(ch[m-1]-ch[m-2],p[i]-ch[m-2])<=0) m--;
        ch[m++]=p[i];
    }
    int k=m;
    for(int i=n-1;i>=1;--i)
    {
        while(m>k&&cross(ch[m-1]-ch[m-2],p[i]-ch[m-2])<=0) m--;
        ch[m++]=p[i];
    }
    if(n>1) m--;
    double c=dis(ch[1],ch[m]);
    for(int i=1;i<m;++i) c+=dis(ch[i],ch[i+1]);
    return c;
}
int n;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        p[i]=Point(x,y);
    }
    printf("%.2lf",ComvexHull(p,n,ch));
    return 0;
}
