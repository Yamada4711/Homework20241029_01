#include <iostream>
using namespace std;

int main()
{
	int countDivisors = 0, countTarget = 0;

	for (int n = 1; n <= 200;)
	{
		countDivisors = 0;

		for (int i = 1; i <= n; ++i)
		{
			if (n % i == 0) ++countDivisors;
		}

		if (countDivisors == 8)
		{
			++countTarget;
			cout << countTarget << " 個目の値は > " << n << endl;
		}

		n += 2;
	}
	cout << "1以上200以下の奇数のうち約数をちょうど8個持つ数の個数は... " << endl
		<< countTarget << " 個です。" << endl;
}