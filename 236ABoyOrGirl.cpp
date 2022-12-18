#include <iostream>
#include <string>
#include <algorithm>


int main()
{
    std::string userName;
	std::cin >> userName;
	int disChar = 0;
	sort(userName.begin(), userName.end());
	for(int i = 1; i < userName.size(); i++)
	{
		if(userName[i] != userName[i - 1])
		{
			disChar++;
		}
	}
	if(disChar % 2 == 0)
	{
		std::cout << "IGNORE HIM!";
	}
	else
	{
		std::cout << "CHAT WITH HER!";
	}
	return 0;
}