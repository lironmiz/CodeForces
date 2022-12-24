#include <iostream> //200BDrinks

int main()
{
	int n;
	double p, res = 0;
	std::cin >> n;
    for(int i = 0; i < n; i++)
	{
		std::cin >> p;
		res += p / 100;
	}
    std::cout <<(res / n) * 100<< std::endl;
    return 0;
}