#include <iostream> // 467AGeorgeAndAccommodation


int main()
{
	int n, p, q, result = 0;
	std::cin >> n;		
	for(int i = 0; i < n; i++)
	{
		std::cin >> p >> q;
		if(p + 1 < q)
		{
			result++;
		}
	}
	std::cout << result;
	return 0;
}