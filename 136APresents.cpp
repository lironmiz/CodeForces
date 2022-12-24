#include <iostream> //136APresents
      
int main()
{
	int n, k;
	std::cin >> n;	
	int arr[n];
	for(int i = 1; i <= n; i++)
	{
		std::cin >> k;
		arr[k - 1] = i;
	}
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}