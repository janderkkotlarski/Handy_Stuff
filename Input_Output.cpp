#include <iostream>
#include <string>
#include <cassert>
 
int main()
{
	
	const std::string program_name{"Input Output"};
	assert(program_name != "");
	
	std::string io_string;
	
	std::getline(std::cin, io_string);
	
	std::cout << io_string << "\n";
	
	return 0;	 
	
}
