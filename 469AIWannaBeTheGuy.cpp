#include <bits/stdc++.h>
 
int  main()
{
	int n;
	std::cin >> n;
	int need[n];
	for(int i = 0;i<n;i++)
	{
		need[i] = 1;
	}
	int x;
	std::cin >> x;
	for(int i= 0 ;i<x;i++)
	{
		int a;
		std::cin >> a;
		a--;
		need[a] = 0;
	}
	std::cin >> x;
	for(int i= 0;i<x;i++)
	{
		int a;
		std::cin >> a;
		a--;
		need[a] = 0;
	}
	for(int i = 0;i<n;i++)
		if(need[i] == 1)
		{
			std::cout << "Oh, my keyboard!";
			return 0;
		}
	std::cout << "I become the guy.";
}