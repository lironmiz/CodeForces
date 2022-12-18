#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s1, s2;
	std::cin >> s1;
	for(int i=0; i <s1.size(); i++)
	{
		if(s1[i] != '+')
		{
			s2.push_back(s1[i]);
		}
	}
	sort(s2.begin(), s2.end());
	std::cout << s2[0];
	for(int i = 1; i < s2.length(); i++)
	{
		std::cout << "+" << s2[i];
	}
	return 0;
}