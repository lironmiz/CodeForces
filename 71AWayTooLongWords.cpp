#include <iostream>
#include <string>

int main()
{
    int n;
	std::cin >> n;
    std::string result = "";
    for(int i = 0; i < n; i++)
	{
		std::string temp;
		std::cin >> temp;
		if( temp.size() > 10)
		{
			result += temp[0] + std::to_string(temp.size() - 2) + temp[temp.size() - 1] + "\n";
		}
		else
		{
			result += temp + "\n";
		}			
	}
	std::cout << result << std::endl;
	return 0;
}