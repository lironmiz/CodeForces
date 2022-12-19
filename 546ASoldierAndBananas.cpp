#include <iostream>

int main()
{
    int k, n, w;
	std::cin >> k >> n >> w;
    int CostOfBananas = ((k + k + (w-1)*k)*w) / 2;
	int result = CostOfBananas  - n;
	if(result <= 0)
	{
		std::cout << 0;
	}
	else
	{
		std::cout << result;
	}
	return 0;
}