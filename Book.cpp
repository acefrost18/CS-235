#include "Book.hpp"

Book::Book() {
    
    bookTitle = "";
    author = "";
    pageCount = 0;
    digitalFlag = false;

}

Book::Book(string bookTitle,string author,int pageCount,bool digitalFlag) {
    setTitle(bookTitle);
    setAuthor(author);
    setPageCount(pageCount);
    setDigital(digitalFlag);
}

void Book::setTitle(string bookTitle) {
    this->bookTitle = bookTitle;
}

void Book::setPageCount(int pageCount) {
    this->pageCount = pageCount;
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setDigital(bool digitalFlag) {
    this->digitalFlag = digitalFlag;
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

