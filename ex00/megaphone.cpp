#include <iostream>

int main(int argc, const char **argv)
{
	std:: string	str;

	if (argc == 1)
	{
		std::cout << "No find arguments";
	}
	for(int i = 1; i < argc; ++i)
	{
		str = argv[i];
		for(int j = 0; j < str.size(); ++j)
			str[j] = (char)toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
	return 0;
}
