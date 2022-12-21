#include <iostream> // 677AVanyaAndFence

int main()
{
	int n, h, a;
	int result = 0;
	std::cin >> n >> h;		
	for(int i = 0; i < n; i++)
	{
		result++;
		std::cin >> a;
		if(a > h)
		{
			result++;
		}
	}
	std::cout << result;
	return 0;
}