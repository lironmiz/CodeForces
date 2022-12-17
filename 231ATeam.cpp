#include <iostream>
#include <string>

int main()
{
    int n;
	int num1, num2, num3, result = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{	
		std:: cin >> num1 >> num2 >> num3;
		if(num1 + num2 + num3 >= 2)
		{
			result++;
		}
	}
	std::cout << result;
	return 0;
}