#include <iostream> // 41ATranslation
#include <string>

int main()
{
	std::string s, t;
	std::cin >> s >> t;
	std::string s_rev;
	if(s.size() != t.size())
	{
		std::cout << "NO";
	}
	else
	{
		for(int i = s.size() - 1; i >= 0; i--)
		{
			s_rev += s[i];
		}
		if(s_rev == t)
		{
			std::cout << "YES";
		}
		else
		{
			std::cout << "NO";
		}	
	}	
}