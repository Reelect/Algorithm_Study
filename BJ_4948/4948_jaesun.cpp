#include <iostream>
#include <list>
#include <cmath>
using namespace std;

list<int> prime_first(int m, list<int> temp)
{
    list<int>::iterator iter;
    int i, isright;
    if (m < 2)
    {
        return temp;
    }

    if (temp.size() == 0)
    {
        temp.push_back(2);
        i = 3;
    }
    else
    {
        i = temp.back();
    }

    while (m >= i)
    {
        isright = 1;
        for (iter = temp.begin(); *iter <= sqrt(double(i)); iter++)
        {
            if (i % *iter != 0)
            {
                continue;
            }
            else
            {
                isright = 0;
                break;
            }
        }
        if (isright)
        {
            temp.push_back(i);
            i += 2;
        }
        else
        {
            i += 2;
        }
    }

    return temp;
}

list<int> is_prime(int m, int n, list<int> temp)
{
    if (m == 1)
    {
        temp.push_back(2);
        cout << "1\n";
        return temp;
    }

    list<int>::iterator iter;
    int sum = 0, isright, count;
    if (m % 2 == 0)
    {
        m += 1;
    }
    else
    {
        m += 2;
    }

    for (int i = m; i <= n; i += 2)
    {
        isright = 1;
        for (iter = temp.begin(); *iter <= sqrt(double(i)); iter++)
        {
            if (i == *iter)
            {
                isright = 0;
                sum++;
                break;
            }

            if (i % *iter != 0)
            {
                continue;
            }
            else
            {
                isright = 0;
                break;
            }
        }
        if (isright)
        {
            sum++;
            temp.push_back(i);
        }
    }

    cout << sum << "\n";

    return temp;
}

int main()
{
    int n;
    list<int> input, temp;
    list<int>::iterator iter;

    cin >> n;

    while (n != 0)
    {
        input.push_back(n);
        cin >> n;
    }

    for (iter = input.begin(); iter != input.end(); iter++)
    {
        temp = prime_first(*iter, temp);
        temp = is_prime(*iter, 2 * (*iter), temp);
    }

    return 0;
}
