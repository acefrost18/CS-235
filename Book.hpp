/*
Derek Yeh
Project 3A
*/
#ifndef BOOK_HPP
#define BOOK_HPP
#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string book_title;
        string author;
        int PAGE_COUNT;
        bool digital_flag;
    public:
        /*
            Default Constructor
        */ 
        Book();


        /*
            Parameterized Constructor: Takes 4 parameters
            @param: The title of the book as a string
            @param: the author of the book as a string
            @param: The number of pages in the book(positive int)
            @param: A flag that indicates if the book is in digital form(Boolean). 
            Default set to false
            @post: The private members of the object are set to the values of the parameters.       
        */ 
        Book(const string book_title,const string author,const int PAGE_COUNT,bool digital_flag = false);
        
        /*
            @post:  Sets the title of the book to the parameter
            @param: Title of the book
        */ 
        void setTitle(const string &book_title);
        
        /*
            @returns: Title of the book
        */ 
        string getTitle() const;

        /*
            @post:  Sets the author of the book to the parameter
            @param: Name of author
        */ 
        void setAuthor(const string &author);

        /*
            @returns: Author of the book
        */ 
        string getAuthor() const;

        /*
            @pre: Page count > 0
            @post:  Sets the page count of the book
            @param: Number of pages(Positive integer)
        */ 
        void setPageCount(const int &PAGE_COUNT) ;
        
        /*
            @returns: Number of pages
        */ 
        int getPageCount() const;
        
        /*
            @post: Sets digital flag to true
        */
        void setDigital();
        
        /*
            @returns: Returns the value of digital flag
        */ 
        bool isDigital() const;
};
#endif
        

