#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;
	std::cin >> str1 >> str2;
	for(int i=0; i <str1.size(); i++)
	{
		if(str1[i] < 92)
		{
			str1[i] += 32;
		}
		if(str2[i] < 92)
		{
			str2[i] += 32;
		}
	}
	if(str1 < str2)
	{
		std::cout << -1;
	}
	if(str1 == str2)
	{
		std::cout << 0;
	}
	if(str2 < str1)
	{
		std::cout << 1;
	}
	return 0;
}