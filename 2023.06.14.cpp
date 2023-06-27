#include <iostream>
#include <vector>
#include <string>

//백준 1330번: 두 수 비교하기

using namespace std;
int main(void)
{
    int a, b;

    cin >> a >> b;

    string str = a > b ? ">" : a < b ? "<" : "==";

    cout << str;

    return 0;
}



           