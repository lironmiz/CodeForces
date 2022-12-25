#include <bits/stdc++.h>//1328ADivisibillityProblem
 
int  main()
{
	int t, a, b;
	std::cin >> t;
	for(int i = 0; i < t; i++)
	{
		std::cin >> a >> b;
		if(a % b == 0)
		{
			std::cout << 0 << std::endl;
		}
		else
		{
			std::cout << b - (a%b) << std::endl;
		}
	}
}