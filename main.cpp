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
			cout << countTarget << " �ڂ̒l�� > " << n << endl;
		}

		n += 2;
	}
	cout << "1�ȏ�200�ȉ��̊�̂����񐔂����傤��8�����̌���... " << endl
		<< countTarget << " �ł��B" << endl;
}