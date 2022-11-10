#include <iostream>

void carpimTablosu() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << i * j << std::endl;
		}
	}
}

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Hello!";

	carpimTablosu();
}
