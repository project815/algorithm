#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int max_common_divisor = 1;
    int min_common_divisor = 1;

    for(int i = 1; i <= 10000; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
            max_common_divisor *= i; 
        }
        else
        {
            min_common_divisor = max_common_divisor * a * b;
        }
    }

    cout << max_common_divisor << " " << min_common_divisor;
    return 0;
}