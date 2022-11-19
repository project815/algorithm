#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int min = a < b ? a : b;

    int i = 1;
    int max_common_divisor = 1;
    int min_common_divisor = 1;

    while(i <= min)
    {
        if(a % i == 0 && b % i == 0)
        {
            max_common_divisor = i; 
        }

        i+=1;
    }
    cout << max_common_divisor << endl;
    cout << (a * b) / max_common_divisor << endl; 
    return 0;
}
/*
24 18이 주어졌을 때
2|24 18
--------
3|12 9
--------
   4 3

최대공약수는 2 * 3 * 4 * 3 = 72
최소공약수는 2 * 3 = 6이다.

2 * 3 * 4 = 24
2 * 3 * 3 = 18

따라서 24 * 18 = (2 * 3 * 4) * (2 * 3 * 3)이다.
즉, 최대공약수 * 최소공약수 = 24 *18을 의미한다.

최대공약수를 구한 뒤 (a * b) / 최대공약수를 하면 최소공약수의 값을 구할 수 있다.

*/