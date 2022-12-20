#include <iostream> // 266BQueueAtTheSchool
#include <string>

int main()
{
    int n, t;
	std::string s;
	std::cin >> n >> t >> s;
	for(int i = 0; i < t; i++)
	{
		for(int j = 1; j < n; ++j)
		{
			if(s[j] == 'G' && s[j - 1] == 'B')
			{
				s[j] = 'B';
				s[j-1] = 'G';
				++j;
			}
		}
	}
	std::cout << s;
}