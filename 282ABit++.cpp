#include <iostream>
#include <string>

int main()
{
    int n, result = 0;
	std::string temp;
	std::cin >> n;
    for(int i = 0; i < n; i++)
	{
		std::cin >> temp;
		if(temp[0] == '+' || temp[1] == '+')
		{
			result++;
		}
		else
		{
			result--;
		}
	}
	std::cout << result;
	return 0;
}