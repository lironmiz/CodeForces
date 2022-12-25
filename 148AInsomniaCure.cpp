#include <bits/stdc++.h>//148AInsomniaCure
 
int  main()
{
	int k, l, m, n, d, res = 0;
	std::cin >> k >> l >> m >> n >> d;
	for(int i = 1; i <= d; i++)
	{
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
		{
			res++;
		}
	}
	std::cout << res << std::endl;
}