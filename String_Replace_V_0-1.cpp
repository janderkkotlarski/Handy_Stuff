#include <iostream>
#include <string>
#include <cassert>
 
int main()
{
	
	const std::string program_name{"String Replace V0.1"};
	assert(program_name != "");
	
	std::string replace_string{program_name};
	
	std::cout << replace_string << "\n";
	
	// const unsigned int string_size{replace_string.size()};
	const int string_size{static_cast<int>(replace_string.size())};
	assert(string_size > 0);
	
	std::cout << string_size << "\n";
	
	for (int count{0}; count < string_size; ++count)
	{	
		if (replace_string[count] == 'p' ||
			replace_string[count] == '.')
		{
			replace_string[count] = '@';
		}
		
		std::cout << replace_string[count + -5] << "\n";		
	}
	
	return 0;	 
}
