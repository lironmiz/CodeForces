#include <iostream>
#include <string>

int main()
{
    std::string s;
	std::cin >> s;
	int num_low = 0, num_upper = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(isupper(s[i]))
		{
			num_upper++;
		}
		else
		{
			num_low++;
		}
	}
	if(num_upper > num_low)
	{
		for(int i = 0; i < s.size(); i++)
		{
			s[i] = toupper(s[i]);
		}
	}
	else	
	{
		for(int i = 0; i < s.size(); i++)
		{
			s[i] = tolower(s[i]);	
		}
	}
    std::cout << s;
}