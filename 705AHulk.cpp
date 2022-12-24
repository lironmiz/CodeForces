#include <iostream> //705AHulk
#include <string>

int main()
{
	int n;
	std::string res;
    std::cin >> n;
	if(n == 1)
	{
		res = "I hate it";
	}
	else
	{
		res = "I hate that";
	}
    for (int i = 2; i <= n; i++)
    {
	   if(i == n)
	   {
		   if( i % 2 != 0)
		   {
			 res += " I hate it";  
		   }
		   else
		   {
			 res += " I love it";
	       }
	   }
	   else
	   {
		   if( i % 2 != 0)
		   {
			 res += " I hate that";  
		   }
		   else
		   {
			 res += " I love that";
	       }
	   }
    }
    std::cout << res << std::endl;
    return 0;
}