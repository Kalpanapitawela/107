#include "library.h"
class Book{
    private:
        string title;
        string authorName;

    public :
        string virtual getTitle();
        void virtual setTitle(string title);
        string virtual getauthorName();
        void virtual setauthorName(string authorName);
        Book(string title,string authorName);
        void virtual printDescription();

};