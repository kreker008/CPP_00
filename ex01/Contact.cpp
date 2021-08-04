#include "Contact.hpp"

std::string Contact::get_first_name()
{
	return (first_name);
}

std::string Contact::get_last_name()
{
	return (last_name);
}

std::string Contact::get_nickname()
{
	return (nickname);
}

std::string Contact::get_phone_number()
{
	return (phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (darkest_secret);
}

void Contact::set_first_name(std::string& value)
{
	this->first_name = value;
}

void Contact::set_last_name(std::string& value)
{
	this->last_name = value;
}

void Contact::set_nickname(std::string& value)
{
	this->nickname = value;
}

void Contact::set_phone_number(std::string& value)
{
	this->phone_number = value;
}

void Contact::set_darkest_secret(std::string& value)
{
	this->darkest_secret = value;
}