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
        string bookTitle;
        string author;
        int pageCount;
        bool digitalFlag;
    public:
        Book();
        Book(string bookTitle,string author,int pageCount,bool digitalFlag);
        void setTitle(string bookTitle);
        string getTitle();
        void setAuthor(string author);
        string getAuthor();
        void setPageCount(int pageCount);
        int getPageCount();
        void setDigital(bool digitalFlag);
        bool isDigital();
};
#endif
        

