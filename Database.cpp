#include "Database.h"

void Database::addBook(const Book& book)
{
	// Adds the book to the database using the book's name as the key
	books[book.getNameOfBook()] = book;
}

void Database::removeBook(const std::string& bookName)
{
	// Removes the book from the database based on the provided book name
	books.erase(bookName);
}

std::string Database::findBook(const std::string& bookName) const
{
	for (const auto& pair : books)
	{
		if (pair.first == bookName)
		{
			const Book& book = pair.second;
			std::cout << "Title: " << book.getNameOfBook() << std::endl;
			std::cout << "Author: " << book.getNameOfAuthor() << std::endl;
			std::cout << "Page Count: " << book.getNumberOfPages() << std::endl;
			std::cout << "Checked Out: " << (book.getCheckedOutStatus() ? "Yes" : "No") << std::endl;
			return book.getNameOfBook();
		}
	}

	std::cout << "That book is not in the database." << std::endl;
	return "";  // Return an empty string to indicate the book was not found
}

void Database::searchByAuthor(const std::string& authorName) const
{
	bool found = false;

	for (const auto& pair : books)
	{
		const Book& book = pair.second;
		if (book.getNameOfAuthor() == authorName)
		{
			std::cout << "Title: " << book.getNameOfBook() << std::endl;
			std::cout << "Author: " << book.getNameOfAuthor() << std::endl;
			std::cout << "Page Count: " << book.getNumberOfPages() << std::endl;
			std::cout << "Checked Out: " << (book.getCheckedOutStatus() ? "Yes" : "No") << std::endl;
			std::cout << std::endl;
			found = true;
		}
	}

	if (!found)
	{
		std::cout << "No books found by that author." << std::endl;
	}
}

void Database::printDatabase() const
{
	// Prints the details of all books in the database
	for (const auto& pair : books)
	{
		const Book& book = pair.second;
		std::cout << "Title: " << book.getNameOfBook() << std::endl;
		std::cout << "Author: " << book.getNameOfAuthor() << std::endl;
		std::cout << "Page Count: " << book.getNumberOfPages() << std::endl;
		std::cout << "Checked Out: " << (book.getCheckedOutStatus() ? "Yes" : "No") << std::endl;
		std::cout << std::endl;
	}
}