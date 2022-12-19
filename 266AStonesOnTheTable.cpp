#include <iostream>
#include <string>



int main()
{
    int n, count = 0;
	std::cin >> n;
	std::string s;
	std:: cin >> s;
	for(int i = 1; i < n; i++)
	{
		if(s[i] == s[i - 1])
		{
			count++;
		}
	}
    std::cout << count;
	return 0;
}