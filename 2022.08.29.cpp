#include <iostream>

int main(void)
{
	//p87. 거스름돈
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int cnt = 0;
	cin >> N;

	while (!(N % 5 == 0) && N > 0)
	{
		if (N == 1 || N == 3) break;
		N -= 2;
		cnt++;
	}
	if ((N == 1 || N == 3) && N < 4)
	{
		cout << "-1";
	}
	else
	{
		cout << N / 5 + cnt;
	}
	
	return 0;
}