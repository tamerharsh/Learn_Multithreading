#include <iostream>
#include <thread>

#include "read_write.hpp"
int main()
{
		std::cout << "\n threads"<<std::endl;
	
		std::thread th1(Download1);
	    std::thread th2(Download2);

	
	if (th2.joinable())
	{
		th2.join();
		std::cout << "\n 2 joinrd"<<std::endl;
	}
	if (th1.joinable())
	{

		th1.join();
		std::cout << "\n 1 joined"<<std::endl;
	}

	for (auto x : list)
	{
		std::cout <<" , "<< x;

	}

	std::cout << "\n Final: " << list.size()<<std::endl;
 return 0;
}