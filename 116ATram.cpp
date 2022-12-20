#include <iostream> // 116ATram


int main()
{
    int n, minCap = 0, a, b, maximumSeats = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		
		std::cin >> a >> b;
		minCap = minCap - a;
		minCap = minCap + b;
		if(minCap > maximumSeats)
		{
			maximumSeats = minCap;
		}
	}
	std::cout << maximumSeats;	
}