#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x < n)
            cout << "-1\n";
        else
        {
            cout <<(1+x - n);
            cout << " ";
            for (int i = 1; i <= n; i++)
            {
                if (i != (1+x - n)){
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}