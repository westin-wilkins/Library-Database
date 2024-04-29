#pragma once
#include <iostream>
#include <string>


class Book
{
private:
    std::string nameOfBook;     // Name of book
    std::string nameOfAuthor;   // Name of author
    int numberOfPages;          // Number of pages
    bool checkedOut;            // Checked-out status of the book

public:
    // Constructor
    Book(std::string const& nameOfBook = "", std::string const& nameOfAuthor = "", 
        int numberOfPages = 0, bool checkedOut = false)
        : nameOfBook(nameOfBook), nameOfAuthor(nameOfAuthor), numberOfPages(numberOfPages), 
        checkedOut(checkedOut)
    {}

    std::string getNameOfBook() const;
    void setNameOfBook(const std::string& name);

    std::string getNameOfAuthor() const;
    void setNameOfAuthor(const std::string& name);

    int getNumberOfPages() const;
    void setNumberOfPages(const int& number);

    bool getCheckedOutStatus() const;
    void setCheckedOutStatus(const bool& checkedOutStatus);
};
