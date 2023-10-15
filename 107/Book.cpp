#include "Book.h"
string Book::getTitle(){
    return this->title;
}
        
void Book::setTitle(string title){
    this->title=title;
}
        
        
string Book::getauthorName(){
    return this->authorName;
}
        
        
void Book::setauthorName(string authorName){
    this->authorName=authorName;
}
        
Book::Book(string title,string authorName){
    this->title=title;
    this->authorName=authorName;
}
        
void Book::printDescription(){
    cout<<"Title: "<< this->title <<endl;
    cout<<"Author Name: "<< this->authorName <<endl;

}