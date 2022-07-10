#include <iostream>
#include <mutex>
#include <cstdint>
#include <chrono>
#include <thread>

int main() {
	std::timed_mutex tm;

	std::cout << "start" << std::endl;

	while (tm.try_lock_for(std::chrono::seconds(5)));// i need ellipse(). we need sleep().

	std::cout << "end" << std::endl;

	return 0;

}