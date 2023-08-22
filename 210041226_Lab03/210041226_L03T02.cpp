#include <iostream>
using namespace std;


class Book
{
private:
    string title;
    string author;
    int publication_year;
    bool available;
public:
    void setDetails(string title , string author , int year){
        this->title =  title;
        this->author = author;
        this->publication_year = year;
    }
    void checkOut(){
        available = false;
    }
    void checkIn(){
        available = true;
    }
    void displayStatus(){
        cout << "Book details" << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Publication Year: " << publication_year << endl;
        cout << "Book Status : ";
        if (available)  cout << "Available" << endl;
        else cout << "Not available" << endl;
        
        
    }
    bool isClassic(){
        if (publication_year < 1973)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
   
};

int main(){
    Book NewBook;
    NewBook.setDetails("Foundation" , "Isaac Asimov " , 1971);
    NewBook.checkIn();
    NewBook.displayStatus();
    if(NewBook.isClassic()) cout << "This book is a classic " << endl;
    else cout << "This book is not a classic" << endl;
    NewBook.checkOut();
    cout << "After checking out" << endl;
    NewBook.displayStatus();
    

}


