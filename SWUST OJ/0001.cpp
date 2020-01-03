#include <iostream>
using namespace std;

int w, h, count;
struct Pasture
{
	char ch;
	bool IsCount;
};
Pasture pasture[80][1000];

int main()
{
	void HasConnect(int i, int j);
	freopen("C:\\Users\\LENOVO\\Desktop\\2.in","r",stdin);
	int MaxCount = 0, i, j;
	cin>>w>>h;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			cin>>pasture[i][j].ch;
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			count = 0;
			HasConnect(i, j);
			if (MaxCount < count)
			{
				MaxCount = count;
			}
		}
	}
	cout<<MaxCount<<endl;
	return 0;
}

void HasConnect(int i, int j)
{
	if (pasture[i][j].ch == '*' && pasture[i][j].IsCount == false)
	{
		count++;
		pasture[i][j].IsCount = true;
		if (i >= 1)
		{
			HasConnect(i - 1, j);
		}
		if (j >= 1)
		{
			HasConnect(i, j - 1);
		}
		if (i <= h - 1)
		{
			HasConnect(i + 1, j);
		}
		if (j <= w - 1)
		{
			HasConnect(i, j + 1);
		}
	}
}
