#include <iostream>
#include "Book.h"
#include "Database.h"

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

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
    Book book8("Crime and Punishment", "Fyodor Dostoevsky", 350);

    userDatabase.addBook(book1);
    userDatabase.addBook(book2);
    userDatabase.addBook(book3);
    userDatabase.addBook(book4);
    userDatabase.addBook(book5);
    userDatabase.addBook(book6);
    userDatabase.addBook(book7);
    userDatabase.addBook(book8);
    
    int choice = 0;
    while (choice != 3)
    {
        displayMenu();
        std::cin >> choice;

        switch (choice)
        {
            case 1:
            {
                //Search books by author
                std::string author;
                std::cout << "Enter the author's name: ";
                std::cin.ignore();
                std::getline(std::cin, author);
                //Clear screan before printing books
                system(CLEAR_SCREEN);
                userDatabase.searchByAuthor(author);
                break;
            }
            case 2:
            {
                //Clear screan before printing books
                system(CLEAR_SCREEN);
                //Display all books in database
                userDatabase.printDatabase();
                break;
            }
            case 3:
            {
                //Exit the program
                std::cout << "Exiting the program..." << std::endl;
                break;
            }
            default:
            {
                //Invalid choice
                std::cout << "Invalid choice." << std::endl;
                break;
            }
        }
    }

    return 0;
}
