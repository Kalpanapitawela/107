#include "library.h"
#include "Book.h"
#include "BookShop.h"
int main(){
    string input;
    string title;
    string authorId;
    string voiceActor;

    BookShop o1= BookShop();

    cout<<"Is it an AudioBook(Y/N): ";
    cin>>input;
    cout<<"Enter Title: ";
    cin>>title;
    cout<<"Enter the Author ID: ";
    cin>>authorId;

    if(input=="Y"){
        cout<<"Enter the Voice Actor: ";
        cin>>voiceActor;
        o1->addBook(AudioBook(title,authorId,voiceActor));
    }
    else{
        o1->addBook(Book(title,authorId));
    }
   

    for(int i=0;i<o1->index;i++){
        o1->printDescription();
    }
    return 0;
}