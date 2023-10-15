#include "Book.h"
#include "AudioBook.h"
#include "BookShop.h"

BookShop::BookShop(){
    this->noOfBooksAdded=noOfBooksAdded=index;
    this->bookCollection=new Book[100];
    //this->bookCollectio<Book*>((10*sizeof(Book)));
 }


void BookShop::addBook(Book book(title,authorName)){
    //new(bookCollectio[index])Book(title,authorName);
    bookCollection[index]=book;
    index++;
}
        
void BookShop::addBook(AudioBook audiobook(title,authorName,voiceActor)){
    //new(bookCollectio[index])AudioBook(title,authorName,voiceActor);
    bookCollection[index]=audiobook;
    index++;
}
BookShop::~BookShop(){
    delete this->bookCollection;
}