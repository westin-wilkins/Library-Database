#pragma once
#include <iostream>
#include <map>
#include <string>
#include <map>
#include "Book.h"


class Database
{
private:
	std::map<std::string, Book> books;

public:
	void addBook(const Book& book);

	void removeBook(const std::string& bookName);

	std::string findBook(const std::string& bookName) const;

	void printDatabase() const;

	void searchByAuthor(const std::string& authorName) const;
};

