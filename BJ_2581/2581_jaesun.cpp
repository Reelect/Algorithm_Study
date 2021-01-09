#include <iostream>
#include <list>
using namespace std;
      
list<int> prime_first(int m, list<int> temp){
    list<int>::iterator iter;
    
    if (m < 2)
    {
        return temp;
    }
    
    temp.push_back(2);
    int i = 3, isright;
   
    while(m > i){
        isright = 1;
        for(iter = temp.begin(); iter != temp.end(); iter++){
            if (i%*iter != 0)
            {
                continue;
            }else
            {
                isright = 0;
                break;
            }
        }
        if (isright)
        {
            temp.push_back(i);
            i++;
        }else
        {
            i++;
        }
          
    }    

    return temp;
}

int is_prime (int m, int n, list<int> temp){
    if (m == 1 && n >= 2)
    {
        m = 2;
    }else if (m == 1 && n == 1)
    {
        return -1;
    }
    
    list <int>::iterator iter;
    int sum = 0, min, is_first = 1, isright;

    for (int i = m; i <= n; i++)
    {
        isright = 1;
        for (iter = temp.begin(); iter != temp.end(); iter++)
        {
            if (i%*iter != 0)
            {
                continue;
            }else
            {
                isright = 0;
                break;
            }
        }
        if (isright)
        {
            if (is_first)
            {
                min = i;
                is_first = 0;
            }
            sum += i;
            temp.push_back(i);
        }
    }
    
    if (is_first)
    {
        return -1;
    }
    
    cout << sum << "\n"  << min;

    return 0;
}

   
int main(){
    int M, N, is_err; 
    list<int> temp;

    cin >> M >> N;

    temp = prime_first(M, temp);
    if ((is_err = is_prime(M, N, temp)) == -1)
    {
        cout << is_err;
    }
    return 0;
}
   

   