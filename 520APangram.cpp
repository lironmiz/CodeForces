#include <bits/stdc++.h>//520APangram
 
int  main()
{
	int n, index, res = 1;
	std::string str;
	std::vector<bool> mark(26, false);
	std::cin >> n;
	std::cin >> str;
	if(n < 26)
	{
		std::cout << "NO" << std::endl;
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			if('A' <= str[i] && str[i] <= 'Z')
			{
				index = str[i] - 'A';
			}
			else if( 'a' <= str[i] && str[i] <= 'z')
			{
				index = str[i] - 'a';
			}
			mark[index] = true;
		}	
		for(int i = 0; i < 26; i++)
		{
			if(mark[i] == false)
			{
				res = 0;
			}
		}
		if(res == 0)
		{
			std::cout << "NO" << std::endl;
		}
		else
		{
			std::cout << "YES" << std::endl;
		}	
	}
}