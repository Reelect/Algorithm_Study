#include <iostream>;
using namespace std;

int main()
{
    int N, n = 2;

    cin >> N;

    while (1)
    {
        if (N % n == 0)
        {
            cout << n << endl;
            N = N / n;
        }
        else
        {
            if (n >= N)
            {
                break;
            }
            n++;
        }
    }

    return 0;
}
