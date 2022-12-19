#include <iostream>

int main()
{
    int x, minSteps;
	std::cin >> x;
    if(x > 5 && x % 5 == 0)
	{
		minSteps = x / 5;
	}
	else if(x > 5)
	{
		minSteps = x / 5 + 1;
	}
	else
	{
		minSteps =1;
	}
    std::cout << minSteps;
}