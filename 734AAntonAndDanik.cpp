#include <iostream> // 734AAntonAndDanik
#include <string>

int main()
{
    int n, anton = 0, danik = 0;
	std::string s;
	std::cin >> n >> s;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'A')
		{
			anton++;
		}
		else
		{
			danik++;
		}
	}
	if(anton > danik)
	{
		std::cout << "Anton";
	}
	else if(anton < danik)
	{
		std::cout << "Danik";
	}
	else
	{
		std::cout << "Friendship";
	}
}