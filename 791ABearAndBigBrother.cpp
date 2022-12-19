#include <iostream>
#include <cmath>

int main()
{
    int a, b;
	std::cin >> a >> b;
	double num_year = (std::log(b) - std::log(a)) / log(1.5);
	if(num_year == 0)
	{
		std::cout << 1;
	}
	else if(num_year == 1)
	{
		std::cout << 2;
	}
	else
	{
		std::cout << std::ceil(num_year );
	}
	return 0;
}