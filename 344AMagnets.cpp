#include <iostream> //344AMagnets
#include <string>
     
int main()
{
	int n, res = 1, lastDigit, lastDigit1;
	std::cin >> n;	
	std::string str;
	std::cin >> str;
	for(int i = 0; i < n; i++)
	{
		lastDigit = str[1];
		std::cin >> str;
		lastDigit1 = str[1];
		if(lastDigit != lastDigit1)
		{
			res++;
		}
	}
	std::cout << res << std::endl;
	return 0;
}