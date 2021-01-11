#include <iostream>
#include <cmath>
using namespace std;

int set_prime(int *prime, int n, int fin){
    int i, isright;
   /* if ((sizeof(prime)/sizeof(int)) < n)
    {
        prime = (int*)realloc(prime, sizeof(int)*n);
    }*/
    
    prime[0] = 2;

    i = prime[fin] + 1;
    while (i < n)
    {
        isright = 1;
        for(int j = 0; prime[j] <= sqrt(i) && j <= fin; j++){
            if (i%prime[j] == 0)
            {
                isright = 0;
                break;
            }
        }
        if (isright)
        {
            prime[++fin] = i++;
        }else
        {
            i++;
        }    
    }
    return fin;
}

int main()
{
    int T, gap, arr[2], max = -1;
    cin >> T;
    int *n = new int[T], fin = 0;
    
    for (int i = 0; i < T; i++)
    {
        cin >> n[i];
        if (max = -1 || n[i] > max)
        {
            max = n[i];
        }
        
    }
    
    int* prime = (int*)calloc(max, sizeof(int));
    if (prime == NULL)
    {
        cout << "에이 싯팔 안해";
        return -1;
    }
    

    for (int i = 0; i < T; i++)
    {
        gap = -1;
        fin = set_prime(prime, n[i], fin);
        
        for (int j = 0; j <= fin; j++)
        {
            for (int k = j; k <= fin; k++)
            {
                if (prime[j]+prime[k] == n[i])
                {
                    if (gap == -1 || prime[k]-prime[j] < gap)
                    {
                        gap = prime[k]-prime[j];
                        arr[0] = prime[j];
                        arr[1] = prime[k];
                    }
                    
                }
                
            }
            
        }
        cout << arr[0] << " " << arr[1] << "\n";
    }
    
    return 0;
}
