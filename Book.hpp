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
        Book(const string bookTitle,const string author,const int pageCount,bool digitalFlag = false);
        void setTitle(const string &bookTitle);
        string getTitle() const;
        void setAuthor(const string &author);
        string getAuthor() const;
        void setPageCount(const int &pageCount) ;
        int getPageCount() const;
        void setDigital();
        bool isDigital() const;
};
#endif
        

