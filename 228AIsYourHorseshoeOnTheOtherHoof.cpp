#include <iostream> //228AIsYourHorseshoeOnTheOtherHoof

int main()
{
	int n1, n2, n3, n4, res = 0;
    std::cin >> n1 >> n2 >> n3 >> n4;
	if(n1 == n2)
	{
		res++;
		if(n2 == n3)
		{
			res++;
			if(n3 == n4)
			{
				res++;
			}
		}
        else if(n3 == n4)
		{
			res++;
		}			
	}
	else if(n1 == n3) // 1 2 4 1
    {
		res++;
		if(n3 == n4)
		{
			res++;
		}	
		else if(n2 == n4)
		{
			res++;
		}
	}
	else if(n1 == n4)
	{
		res++;
		if(n2 == n3)
		{
			res++;
		}
	}
	else if(n2 == n3) // 1 2 4 2
	{
		res++;
		if(n3 == n4)
		{
			res++;
		}
	}
	else if(n2 == n4)
	{
		res++;
	}
	else if(n3 == n4)
	{
		res++;
	}
    std::cout << res << std::endl;
    return 0;
}