#include<iostream>
#include<cstring>
using namespace std;
 
//初始化迷宫，点为2表示迷宫图为"█"，点为0表示迷宫图为" "
int migo[9][9]=
{
    {2, 2, 2, 2, 2, 2, 2, 2, 2},
    {0, 0, 0, 0, 0, 0, 0, 0, 2},
    {2, 0, 2, 2, 0, 2, 2, 0, 2},
    {2, 0, 2, 0, 0, 2, 0, 0, 2},
    {2, 0, 2, 2, 2, 0, 2, 0, 2},
    {2, 0, 2, 0, 0, 0, 2, 0, 2},
    {2, 0, 2, 0, 2, 0, 2, 2, 2},
    {2, 0, 0, 0, 2, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 2}
};
//建立出迷宫图


int way_value[9][9];//设置一个权值，用来判断迷宫的方向

int starti=1,startj=0;//设置出发点为0,0

int endi=7,endj=8;//出口为7,7
 
/*
递归算法：
    算法中，if语句即为递归函数的出口，当到达迷宫出口时，输出；
    若未到达迷宫出口，并且存在可走路径即迷宫中为" "时，依次进行
    各个方向上的探索，直到找到将所有可能的结果试探完为止。
*/
void visit(int i,int j,int way)
{
    
    migo[i][j]=1;   //当值为1表示此点可以走
	way_value[i][j]=way;
    /*
    此为递归出口，如果一步步试探成功，即到达迷宫出口，则输出迷宫图"█"及路径"->↓←↑"
    */
    if(i==endi&&j==endj)//判断有没有到到达迷宫出口
    {
        cout<<endl;
    
        for(int m=0; m<9; m++)
        {
            for(int n=0; n<9; n++)
            {
                if(migo[m][n]==2)   //如果为值为2，表示迷宫中为"█"
                    cout<<"█";
                else if(migo[m][n]==1)
				{
					//这里编写输出路径方向，请使用if来进行前进方向的判断，即1代表->，2代表↓，3代表← ，4代表向↑
/*
第一处空白
		请编写相对应的代码
*/
					if(way_value[m][n]==1)
					{
						cout<<"->";
					}
					if(way_value[m][n]==2)
					{
						cout<<"↓";
					}
					if(way_value[m][n]==3)
					{
						cout<<"←";
					}
					if(way_value[m][n]==4)
					{
						cout<<"↑";
					}
				}
                else
                    cout<<"  ";
            }
            cout<<endl;
        }
    }
	//四种走法，右，下，左，上，请在下方做出if判断，编写相应的的递归程序。
/*
第二处空白
	请编写相对应的代码
*/
	if(migo[i][j+1]==0 && j+1<=endj && !way_value[i][j+1])
	{
		visit(i,j+1,1);
	}
	if(migo[i+1][j]==0 && i+1<=endi && !way_value[i+1][j])
	{
		visit(i+1,j,2);
	}
	if(migo[i][j-1]==0 && j-1>=0 && !way_value[i][j-1])
	{
		visit(i,j-1,3);
	}
	if(migo[i-1][j]==0&& i-1>=0 && !way_value[i-1][j])
	{
		visit(i-1,j,4);
	}
	migo[i][j]=0;
}
 
/********
main函数：
首先显示给出的迷宫图，然后调用visit函数，对迷宫进行探索
********/
int main()
{
    int i,j;
    cout<<"显示迷宫："<<endl;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
            if(migo[i][j]==2)
                cout<<"█";
            else
                cout<<"  ";
        cout<<endl;
    }
	memset(way_value,0,sizeof(way_value));        // 初始化way_value数组全部为0
    cout<<"迷宫路径如下：";
    visit(starti,startj,1);
    return 0;
}
