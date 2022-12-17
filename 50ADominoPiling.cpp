#include <iostream>
#include <cmath>

int main()
{
    int M, N, result;
	std::cin >> M >> N;
    result = M * N / 2;
	std::cout << floor(result);
	return 0;
}