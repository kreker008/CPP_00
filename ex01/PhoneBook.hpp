#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "string"
#include "iostream"
#include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void	add_contact();
	void 	print_book();
	void	print_contact(int);
private:
	void 	print_contact(Contact&);
	void	print_position(std::string);
	void 	print_contact_part(Contact&, int);
	Contact contact[8];
	char 	last_add;
	char 	contact_count;
};

#endif
