//내가 해본 풀이
// #include <iostream>

// int main(void)
// {
//     using namespace std;

//     ios::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);

//     int cnt;
//     int M;
//     int N;

//     cin >> cnt >> M >> N; //연산자 오버로딩을 계속하도고라도~!?

//     int *list = new int[cnt];

//     for(int i = 0; i < cnt; i++)
//     {
//         cin >> list[i];
//     }

//     for(int i = 0; i < cnt - 1; i++)
//     {
//         for(int j = i + 1; j < cnt; j++)
//         {
//             if(list[i] < list[j])
//             {
//                 int tmp = list[j];
//                 list[j] = list[i];
//                 list[i] = tmp;
//             }
//         }
//     }

//     cout << list[0] * N * (M / N) + list[1] * (M % N) << endl;
    
//     delete []list;
// }



#include <iostream>

int main(void)
{
    //p.92. 큰 수의 법칙
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int cnt, M, N;
    cin >> cnt >> M >> N;
    
    int* list = new int[cnt];
    for(int i = 0; i < cnt ; i++)
    {
        cin >> list[i];   
    }
    
    for(int i = 0; i < cnt - 1; i++)
    {
        for(int j = i + 1; j < cnt ; j++)
        {
            if(list[i] < list[j])
            {
                int tmp = list[j];
                list[j] = list[i];
                list[i] = tmp;
            }
        }
    }   

    int a = (M / (N + 1)) * N + (M % (N + 1));

    int b = 0;
    for(int i = 0; i < a; i ++)
    {
        b += list[0];
    }
    for(int i = 0; i  < M - a; i++)
    {
        b += list[1];
    }

    cout << b;
    return 0;
}