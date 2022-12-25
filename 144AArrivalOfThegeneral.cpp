#include <bits/stdc++.h>//144AArrivalOfTheGeneral
 
int  main()
{
	int n, max, min, res, iMax = 0, iMin = 0;
	std::cin >> n;
	int arr[200];
	std::cin >> arr[0];
	max = arr[0];
	min = arr[0];
	
	for(int i = 1; i < n ; i++)
	{
		std::cin >> arr[i];
		if(arr[i] > max)
		{
			max = arr[i];
			iMax = i;
		}
		else if(arr[i] <= min)
		{
			min = arr[i];
			iMin = i;
		}
	} 
	std::cout << iMax + (n - 1 - iMin) - (iMin < iMax ? 1 : 0) << std::endl;
}