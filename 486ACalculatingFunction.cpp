#include <iostream> //486ACalculatingFunction
#include <cmath>
 
int main()
{
	long long n, a;
    std::cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    std::cout << a << std::endl;
    return 0;
}
