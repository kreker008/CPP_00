#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include "string"
#include "iostream"

class PhoneBook
{
public:
	PhoneBook();
	void	add_contact();
	void 	print_contact(size_t);
private:
	Contact contact[8];
	char 	last_add;
	char 	contact_count;
};

#endif
