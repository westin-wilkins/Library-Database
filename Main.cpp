#include <iostream>
#include "Book.h"
#include "Database.h"

void displayMenu()
{
    std::cout << "Welcome to the Book Database!" << std::endl;
    std::cout << "1. Search books by author" << std::endl;
    std::cout << "2. Display all books" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

int main()
{
	Database userDatabase;
	
    // Add books to the database
    Book book1("For Whom The Bell Tolls", "Ernest Hemmingway", 200);
    Book book2("The Count of Monte Cristo", "Alexandre Dumas", 300);
    Book book3("Les Miserables", "Victor Hugo", 150);
    Book book4("The Brothers Karamazov", "Fyodor Dostoevsky", 150);
    Book book5("The Idiot", "Fyodor Dostoevsky", 150);
    Book book6("Hamlet", "William Shakespeare", 150);
    Book book7("All Quiet on the Western Front", "Erich Maria Remarque", 350);

    userDatabase.addBook(book1);
    userDatabase.addBook(book2);
    userDatabase.addBook(book3);
    userDatabase.addBook(book4);
    userDatabase.addBook(book5);
    userDatabase.addBook(book6);
    userDatabase.addBook(book7);
    
    userDatabase.searchByAuthor("Fyodor Dostoevsky");

    // Print the desired book
    //userDatabase.printDatabase();
    

    return 0;
}
