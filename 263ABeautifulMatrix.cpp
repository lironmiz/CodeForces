#include <iostream>
#include <cmath>

int main()
{
    int n, n1, n2, n3, n4, result = 0;
    for(int i = 0; i < 5; i++)
	{
		std::cin >> n >> n1 >> n2 >> n3 >> n4;
		if(n == 1 || n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1)
		{
			if(n == 1)
			{
				result = abs(2 - i) + 2;
			}
			else if(n1 == 1)
			{
				result = abs(2 - i) + 1;
			}
			else if(n2 == 1)
			{
				result = abs(2 - i);
			}
			else if(n3 == 1)
			{
				result = abs(2 - i) + 1;
			}
			else
			{
				result = abs(2 - i) + 2;
			}
		}
		
	}
	std::cout << result;
	return 0;
}