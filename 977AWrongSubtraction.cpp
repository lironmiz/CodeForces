#include <iostream> // 977AWrongSubtraction


int main()
{
    int k, n;
	std::cin >> n >> k;
	for(int i = 0; i < k; i++)
	{
        
		if(n % 10 != 0)
		{
			n = n -1;
		}
		else
		{
			n = n / 10;
		}
	}
    std::cout << n;
}