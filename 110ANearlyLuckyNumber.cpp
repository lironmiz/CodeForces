#include <iostream> // 110ANearlyLuckyNumber


int main()
{
    long long int n;
	int count = 0;
	std::cin >> n;
	while(n > 0)
	{
		if(n % 10 == 4 || n % 10 == 7)
		{
			count++;
		}
		n /= 10;
	}
	if(count == 4 || count == 7)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}