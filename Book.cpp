#include "Book.hpp"

Book::Book() {
}

Book::Book(const string bookTitle,const string author,const int pageCount,bool digitalFlag) {
    
    setTitle(bookTitle);
    setAuthor(author);
    setPageCount(pageCount);
    this->digitalFlag = digitalFlag;

}

void Book::setTitle(string bookTitle) {
    this->bookTitle = bookTitle;
}

void Book::setPageCount(int pageCount) {
    if(pageCount > 0) {
        this->pageCount = pageCount;
    }
    
    else {
        this->pageCount = 0;
    }
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setDigital() {
    this->digitalFlag = true;
}

string Book::getTitle() {
    return bookTitle;
}

string Book::getAuthor() {
    return author;
}

int Book::getPageCount() {
    return pageCount;
}

bool Book:: isDigital() {
    return digitalFlag;
}

