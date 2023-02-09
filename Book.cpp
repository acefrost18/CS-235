#include "Book.hpp"

Book::Book() {
}

Book::Book(const string bookTitle,const string author,const int pageCount,bool digitalFlag) {
    
    setTitle(bookTitle);
    setAuthor(author);
    setPageCount(pageCount);
    this->digitalFlag = digitalFlag;

}

void Book::setTitle(const string& bookTitle) {
    this->bookTitle = bookTitle;
}

void Book::setPageCount(const int& pageCount) {
    if(pageCount > 0) {
        this->pageCount = pageCount;
    }
    
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setDigital() {
    this->digitalFlag = true;
}

string Book::getTitle() const {
    return bookTitle;
}

string Book::getAuthor() const {
    return author;
}

int Book::getPageCount() const {
    return pageCount;
}

bool Book:: isDigital() const {
    return digitalFlag;
}

