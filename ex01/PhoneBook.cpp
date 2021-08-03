#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact(NULL), last_add(0){}

void	PhoneBook::add_contact()
{
	std::string str;

	std::cout << "Type in firstname";
	std::cin >> str;
	if (last_add > 8)
		last_add = 0;
	contact[last_add].set_first_name(str);
	std::cout << "Type in last_name";
	std::cin >> str;
	contact[last_add].set_nickname(str);
	std::cout << "Type in nickname";
	std::cin >> str;
	contact[last_add].set_phone_number(str);
	std::cout << "Type in phone number";
	std::cin >> str;
	contact[last_add].set_darkest_secret(str);
	std::cout << "Type in darkest secret";
	std::cin >> str;
	++last_add;
	if (contact_count < 9)
		++contact_count;
}

void	PhoneBook::print_contact(size_t index)
{
	if (index > contact_count)
		std::cout << "Non-existent index" << std::endl;
	std::right(std::cout);
	std::cout.width(10);
	std::cout >> contact[index]
}