#include "Book.h"
#include <iostream>

std::string Book::getNameOfBook() const
{
    return nameOfBook;
}

void Book::setNameOfBook(const std::string& name)
{
    nameOfBook = name;
}

std::string Book::getNameOfAuthor() const
{
    return nameOfAuthor;
}

void Book::setNameOfAuthor(const std::string& name)
{
    nameOfAuthor = name;
}

int Book::getNumberOfPages() const
{
    return numberOfPages;
}

void Book::setNumberOfPages(const int& number)
{
    numberOfPages = number;
}

bool Book::getCheckedOutStatus() const
{
    return checkedOut;
}

void Book::setCheckedOutStatus(const bool& checkedOutStatus)
{
    checkedOut = checkedOutStatus;
}