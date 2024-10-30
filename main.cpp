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
			cout << countTarget << " ŒÂ–Ú‚Ì’l‚Í > " << n << endl;
		}

		n += 2;
	}
	cout << "1ˆÈã200ˆÈ‰º‚ÌŠï”‚Ì‚¤‚¿–ñ”‚ð‚¿‚å‚¤‚Ç8ŒÂŽ‚Â”‚ÌŒÂ”‚Í... " << endl
		<< countTarget << " ŒÂ‚Å‚·B" << endl;
}