// #include <iostream>


// //2차원 배열 연습
// int main(void)
// {
//     using namespace std;

//     int N, M;

//     cin >> N >> M;

//     int** list = new int* [N];

//     for (int i = 0; i < N; i++)
//     {
//         list[i] = new int[M];
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             list[i][j] = 0;
//             cout << list[i][j];
//         }cout << endl;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         delete[]list[i];
//     }delete[]list;


//     return 0;
// }


#include <iostream>
$include <algorithm>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int A;
    int max_num = 1;
    for(int i = 0; i < M; i++)
    {
        int min_num = 10001;
        for(int j = 0; j < N; j++)
        {
            cin >> A;
            min_num = min(A, min_num);
        }
        max_num = max(max_num, min_num);
    }
    cout << max_num;

    return 0;
}