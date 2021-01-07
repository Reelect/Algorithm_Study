#include <iostream>
using namespace std;

int take_prime(int num)
{
    int *list = new int[num];

    list[0] = 2;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % list[j] == 0)
            {
                break;
            }
            else
            {
                if (list[j] == 0)
                {
                    list[j] == i;
                }
            }
        }
    }

    return *list;
}

int main()
{
    int M, N, k;
    int *prime_list;
    cin >> M >> N;

    *prime_list = take_prime(N);

    for (int i = M; i <= N; i++)
    {
        k = 0;
        while (1)
        {

            if (i == prime_list[k])
            {
                cout << i << endl;
            }
            else if (i % prime_list[k] == 0 || i < prime_list[k] || prime_list[k] == 0)
            {
                break;
            }

            k++;
        }

        return 0;
    }
}