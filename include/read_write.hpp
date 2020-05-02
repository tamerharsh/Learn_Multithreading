#ifndef READ_WRITE_HPP
#define READ_WRITE_HPP

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

std::vector<int> list;
std::mutex g_mutex;
void Download1()
{
	for (int i = 1999; i < 2099; i++)
	{
		 g_mutex.lock();
		 list.push_back(i);	
		 std::cout << "\n From Download 1 " << i-1999 << " => " << list[i-1999] << " \n ";
		 g_mutex.unlock();

	}
	std::cout << "\nFrom D1=> " << list.size()<<std::endl;
}

void Download2()
{
	for (int i = 0; i < 100; i++) 
	{
		g_mutex.lock();
		list.push_back(55);
		std::cout << "\n From Dowmlaod2 "<<i<<" ------- "<<list[i]<<" \n ";
		g_mutex.unlock();

	}

	std::cout << "\n From D2=> "<<list.size()<<std::endl;
}
#endif()