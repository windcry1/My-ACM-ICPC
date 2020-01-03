#include <iostream>
#include <fstream>

using namespace std;

int res[100], k = 0;

void sumOfKNumber(int * a, int n, int sum)
{
    if(n <= 0 || sum <= 0)
        return;

    if(k > 0)
    {
        if(sum == a[n-1])
        {
            for(int i = k-1; i >= 0; --i)
                cout << res[i] << "+";

            cout << a[n-1] << endl; //????,???,?????????
        }
    }

    //??????n??
    res[k++] = a[n-1];
    sumOfKNumber(a, n-1, sum-a[n-1]);
    k--;

    sumOfKNumber(a, n-1, sum);
}

int main()
{

    int n, a[100], ans;

    while(cin >> n)
    {
        for(int i = 0; i < n; ++i)
            cin >> a[i];

        sumOfKNumber(a, n, 3);
    }

    return 0;
}
