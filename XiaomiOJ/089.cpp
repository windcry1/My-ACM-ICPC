#include <iostream>
using namespace std;

int GetN_1(int n)
{
    if (n < 5)
    {
        return 0;
    }
    else
    {
        return (n / 5 + GetN_1(n / 5));
    }
}

int main()
{
	int n;
	cin>>n;
    cout << GetN_1(n) << endl;
    return 0;
}
