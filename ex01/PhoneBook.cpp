#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : last_add(0), contact_count(0){}

void	PhoneBook::add_contact()
{
	std::string str;

	if (last_add >= 7)
		last_add = 0;
	std::cout << "Type in first name: ";
	getline(std::cin, str);
	contact[last_add].set_first_name(str);

	std::cout << "Type in last name: ";
	getline(std::cin, str);
	contact[last_add].set_last_name(str);

	std::cout << "Type in nickname: ";
	getline(std::cin, str);
	contact[last_add].set_nickname(str);

	std::cout << "Type in phone number: ";
	getline(std::cin, str);
	contact[last_add].set_phone_number(str);

	std::cout << "Type in darkest secret: ";
	getline(std::cin, str);
	contact[last_add].set_darkest_secret(str);

	++last_add;
	if (contact_count < 7)
		++contact_count;
}

void	PhoneBook::print_position(std::string pos)
{
	std::right(std::cout);
	std::cout.width(10);
	if (pos.size() > 10)
	{
		pos.resize(9);
		pos += '.';
	}
	std::cout << pos;
}

void	PhoneBook::print_contact(Contact& contact)
{
	std::cout <<  '|';
	print_position(contact.get_first_name());
	std::cout <<  '|';
	print_position(contact.get_last_name());
	std::cout <<  '|';
	print_position(contact.get_nickname());
	std::cout <<  '|';
	print_position(contact.get_phone_number());
	std::cout <<  '|';
	print_position(contact.get_darkest_secret());
	std::cout <<  '|' << std::endl;
}

void	PhoneBook::print_contact(int index)
{
	if (index >= contact_count || index < 0)
	{
		std:: cout << "Invalid index\n";
		return;
	}
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|first name|last name |nickname  |phone numb|darkest secret|" << std::endl;
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	print_contact(contact[index]);
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "press enter to continue" << std::endl;
	getchar();
}

void 	PhoneBook::print_contact_part(Contact& contact, int index)
{
	std::cout << '|';
	std::cout.width(10);
	std::cout << index;
	std::cout << '|';
	print_position(contact.get_first_name());
	std::cout << '|';
	print_position(contact.get_last_name());
	std::cout << '|';
	print_position(contact.get_nickname());
	std::cout << '|' << std::endl;
}

void 	PhoneBook::print_book()
{
	if (contact_count == 0)
		std::cout << "Phonebook is empty\n";
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	for(int i = 0; i < contact_count; ++i)
		print_contact_part(contact[i], i + 1);
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
}