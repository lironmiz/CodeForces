#include <bits/stdc++.h>//443AAntonAndLetters
 
int  main()
{
	int res = 0, index;
	std::string str;
	std::vector<bool> mark(26,false);
	std::getline (std::cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			index = str[i] - 'A';
			mark[index] = true;
		}
		else if( 'a' <= str[i] && str[i] <= 'z')
		{
			index = str[i] - 'a';
			mark[index] = true;
		}
	}
	for(int i = 0; i < 26; i++)
	{
		if(mark[i] == true)
		{
			res++;
		}
	}
	std::cout << res << std::endl;
}