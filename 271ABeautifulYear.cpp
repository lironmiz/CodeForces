#include <iostream> // 271ABeautifulYear

int main()
{
	int y;
	std::cin >> y;
	
	while(true)
	{
		y += 1;
		int a = y / 1000;
		int b = (y / 100) % 10;
		int c = (y / 10) % 10;
		int d = y % 10;
		if( a != b && a != c && a != d && b != c && b != d && c != d)
		{
			break;
		}			
	}
	std::cout << y;
	return 0;
}