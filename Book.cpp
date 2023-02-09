#include "Book.hpp"

/*
            Default Constructor
*/ 
Book::Book() {
}

/*
    Parameterized Constructor: Takes 4 parameters
    @param: The title of the book as a string
    @param: the author of the book as a string
    @param: The number of pages in the book(positive int)
    @param: A flag that indicates if the book is in digital form(Boolean). 
    Default set to false
     @post: The private members of the object are set to the values of the parameters.       
*/ 
Book::Book(const string book_title,const string author,const int PAGE_COUNT,bool digital_flag) {
    setTitle(book_title);
    setAuthor(author);
    setPageCount(PAGE_COUNT);
    this->digital_flag = digital_flag;

}

/*
    @post:  Sets the title of the book to the parameter
    @param: Title of the book
*/ 
void Book::setTitle(const string& book_title) {
    this->book_title = book_title;
    
}

/*
    @pre: Page count > 0
    @post:  Sets the page count of the book
    @param: Number of pages(Positive integer)
*/ 
void Book::setPageCount(const int& PAGE_COUNT) {
    if(PAGE_COUNT > 0) {
        this->PAGE_COUNT = PAGE_COUNT;
    }
    
}

/*
    @post:  Sets the author of the book to the parameter
    @param: Name of author
*/ 
void Book::setAuthor(const string& author) {
    this->author = author;
}

/*
    @post: Sets digital flag to true
*/
void Book::setDigital() {
    this->digital_flag = true;
}

/*
    @returns: Title of the book
*/ 
string Book::getTitle() const {
    return book_title;
}

/*
    @returns: Author of the book
*/ 
string Book::getAuthor() const {
    return author;
}

/*
    @returns: Number of pages
*/ 
int Book::getPageCount() const {
    return PAGE_COUNT;
}

/*
    @returns: Returns the value of digital flag
*/ 
bool Book:: isDigital() const {
    return digital_flag;
}

