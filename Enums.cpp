#include <iostream>
#include <string>
#include <cassert>


enum class fujoshi_type {megane, himecut, dojikko, meido};

enum class fruit_type {orange, strawberry, fapple};

enum class color_type {oragne, green, purple};

int main()
{
	
	int plek = 0; // 0: megane, 1: himecut, 2: dojikko
	
	fujoshi_type fujoshi{fujoshi_type::megane};
	
	bool trip{false};
	
	
	if(fujoshi == fujoshi_type::dojikko)
	{
		trip = true;
	}
	
	fruit_type fruit{fruit_type::orange};
	
}
