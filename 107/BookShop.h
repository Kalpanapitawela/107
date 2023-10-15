#include "library.h"
#include "Book.h"
#include "AudioBook.h"

class BookShop{
    private:
        int index=0;
        int noOfBooksAdded;
        Book bookCollection[];
        
    public:
        BookShop();
        void addBook(Book book);
        void addBook(AudioBook audiobook);
        ~BookShop();
};