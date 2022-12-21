#include <iostream> // 1030AInSearchOfAnEasyProblem 
#include <string>
int main()
{
	int n, opinion;
	std::string result = "EASY";
	std::cin >> n;		
	for(int i = 0; i < n; i++)
	{
		std::cin >> opinion;
		if(opinion  == 1)
		{
			result = "HARD";
		}
	}
	std::cout << result;
	return 0;
}