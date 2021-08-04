#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	book;
	std::string str;
	int			index;

	while(!std::cin.eof())
	{
		std::cout <<"Write:\nEXIT - to quit the program\n"<<
				  "SEARCH - to output the contacts\nADD - to add new contact\n";
		getline(std::cin, str);
		if (str == "ADD")
			book.add_contact();
		else if (str == "SEARCH")
		{
			std::cout << "Choose contact index\n";
			book.print_book();
			index = -1;
			std::cin >> index;
			getline(std::cin, str);
			book.print_contact(index - 1);
		}
		else if (str == "EXIT")
			return (0);
		else if (!std::cin.eof())
		{
			std::cout << "Invalid comand, press enter to continue" << std::endl;
			getchar();
		}
	}
}