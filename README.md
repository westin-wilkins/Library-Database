Library Program

This is a C++ program that uses concepts in OOP to create a fully functional book database. The program offers various management features, including adding new books, removing existing books, and searching for specific books within the database.

Book Class:
The Book class represents the essential attributes and functionalities of a book. Each instance of the Book class encapsulates the book's title, author, number of pages, and checked-out status. The class provides methods to access and modify these attributes, allowing for easy manipulation of individual book objects.

Database Class:
The Database class is an unordered map containing all information about the books inside it. It manages the storage and retrieval of book objects and provides operations on the database. These operations include adding new books to the collection, removing existing books, and searching for specific books based on their names.

Features:
    Add Book: Users can add new books to the database by providing the necessary details, such as the book's title, author, and number of pages. The book is added to the collection, becoming part of the database.

    Remove Book: This feature allows users to remove a book from the database. Users can specify the book to be removed by providing the book's title.

    Search Books: Users can search for books within the database based on its title. The program will return a list of books that match the search criteria, providing useful information about each book found.

Project Status:
I plan on, in the future, adding features to the program such as the ability to search based on other criteria besides just the title of the book. I also plan on adding the ability to sort the database as well.
