#include "library.h"
#include "Book.h"

class AudioBook : Book {
    private:
        string voiceActor;

    public:
        string getTitle();
        void setTitle(string title);
        string getAuthorName();
        void getAuthorName(string AuthorName);
        string getVoiceActor();
        void getVoiceActor(string voiceActor);
        AudioBook(string title,string authorName, string voiceActor);
        void printDescription();
        
};