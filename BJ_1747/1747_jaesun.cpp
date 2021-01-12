#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int is_prime(int *prime, int n, int fin)
{
    int i, isright;
    bool isprime = false;
    /* if ((sizeof(prime)/sizeof(int)) < n)
    {
        prime = (int*)realloc(prime, sizeof(int)*n);
    }*/

    prime[0] = 2;

    i = prime[fin] + 1;
    while (i <= n)
    {
        isright = 1;
        for (int j = 0; prime[j] <= sqrt(i) && j <= fin; j++)
        {
            if (i % prime[j] == 0)
            {
                isright = 0;
                break;
            }
        }
        if (isright)
        {
            prime[++fin] = i++;
        }
        else
        {
            i++;
        }
    }
    
    if (prime[fin] == n)
    {
        cout << n;
        exit(0);
    }

    return fin;
}

int main(int argc, char const *argv[])
{
    int N, len = 0, fin, prime_fin = 0;
    bool isprime = false, first = true, only_left = false;
    string n;

    cin >> N;
    if (N > 1000000)
    {
        return 0;
    }
    

    int *prime = (int *)calloc(10000000, sizeof(int));

    n = to_string(N);
    fin = n.length() - 1;

    while (true)
    {
        for (int i = 0; i <= fin - i; i++)
        {
            if (n[0 + i] != n[fin - i])
            {
                if (n[0 + i] >= n[fin - i] || only_left)
                {
                    n[fin - i] = n[0 + i];
                }
                else
                {
                    if(fin%2){
                        if ( to_string(int(stod(n) + pow(10, double(fin / 2 + 1)))).length() > n.length())
                        {
                            n.resize(n.length()+1);
                            n =  to_string(int(stod(n) + pow(10, double(fin / 2 + 1))));                        
                            fin++;
                            n[fin - i] = n[0 + i];
                            only_left =true;
                        }
                        else
                        {
                            n =  to_string(int(stod(n) + pow(10, double(fin / 2 + 1))));
                            n[fin - i] = n[0 + i];
                            only_left =true;
                        }
                    }else
                    {
                        if ( to_string(int(stod(n) + pow(10, double(fin / 2)))).length() > n.length())
                        {
                            n.resize(n.length()+1);
                            n =  to_string(int(stod(n) + pow(10, double(fin / 2))));                        
                            fin++;
                            n[fin - i] = n[0 + i];
                            only_left =true;
                        }
                        else
                        {
                            n =  to_string(int(stod(n) + pow(10, double(fin / 2))));
                            n[fin - i] = n[0 + i];
                            only_left =true;
                        }
                    }
                    
                }
            }
        }

        if ((int(n[0]) == 5 || int(n[0])%2 == 0) && n.length() > 2)
        {
            n[0] = char(int(n[0])+1);
            n[fin] = n[0];
        }
        

        prime_fin = is_prime(prime, stoi(n), prime_fin);

        if (n.length() % 2)
        {
            if (n.length() == 1)
            {
                switch (n[0])
                {
                case '1':
                    cout << "2";
                    return 0;
                case '4':
                    cout << "5";
                    return 0;
                case '6':
                    cout << "7";
                    return 0;

                
                default:
                    cout << "11";
                    return 0;
                }
            }
            else
            {
                if(fin%2){
                    if ( to_string(int(stod(n) + pow(10, double(fin / 2 + 1)))).length() > n.length())
                    {
                        n.resize(n.length()+1);
                        n =  to_string(int(stod(n) + pow(10, double(fin / 2 + 1))));
                        fin++;
                    }
                    else{
                        n =  to_string(int(stod(n) + pow(10, double(fin / 2 + 1))));
                    }
                }else
                {
                    if (to_string(int(stod(n) + pow(10, double(fin / 2)))).length() > n.length())
                    {
                        n.resize(n.length()+1);
                        n = to_string(int(stod(n) + pow(10, double(fin / 2))));
                        fin++;
                    }
                    else{
                        n =to_string(int(stod(n) + pow(10, double(fin / 2))));
                    }
                }
                
            }
        }
        else
        {
            if (n.length() == 2)
            {
                cout << "101";
                return 0;
            }
            else
            {
                if(fin%2){
                    if (to_string(int(stod(n) + pow(10, double(fin / 2 + 1)))).length() > n.length())
                    {
                        n.resize(n.length()+1);
                        n = to_string(int(stod(n) + pow(10, double(fin / 2 + 1))));
                        fin++;
                    }
                    else{
                        n = to_string(int(stod(n) + pow(10, double(fin / 2 + 1))));
                    }
                }else
                {
                    if (to_string(int(stod(n) + pow(10, double(fin / 2)))).length() > n.length())
                    {
                        n.resize(n.length()+1);
                        n = to_string(int(stod(n) + pow(10, double(fin / 2))));
                        fin++;
                    }
                    else{
                        n = to_string(int(stod(n) + pow(10, double(fin / 2))));
                    }
                }
            }
        }
    }

    cout << n;

    return 0;
}
