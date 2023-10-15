#include "AudioBook.h"

string AudioBook::getVoiceActor(){
    return this->voiceActor;
}
        
void AudioBook::setTitle(string voiceActor){
    this->voiceActor=voiceActor;
}
        
        
AudioBook::AudioBook(string title,string authorName,string voiceActor){
    this->title=Book::getTitle();
    this->authorName=Book::getauthorName();
    this->voiceActor=voiceActor;
}
        
void AudioBook::printDescription(){
    Book->printDescription();
    cout<<"voiceActor: "<< this->voiceActor<<endl;
}