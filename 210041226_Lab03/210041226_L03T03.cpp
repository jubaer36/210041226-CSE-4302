#include <iostream>
using namespace std;

class Student
{
private:
    string first_name;
    string last_name;
    int id;
    int birth_year;
    string course;
    int obtained_mark;
    float gpa;

public:
    void printTranscript(){
        cout << "Name: " << first_name << ' ' << last_name << endl;
        cout << "ID: " << id <<endl;
        cout << "Birth Year: " << birth_year << endl;
        cout << "Course : " << course << endl;
        cout << "Obtained Marks: " << obtained_mark << endl;
    }
    void setDetails(string first_name , string last_name , int id , int birth_year , string course , int obtained_mark){
        this->first_name = first_name;
        this->last_name = last_name;
        this->id = id;
        this->birth_year = birth_year;
        this->course = course;
        this->obtained_mark = obtained_mark;

    }
    int displayAge(){
        return (2023 - birth_year);
    }
    float displayGPA(){
        if(obtained_mark > 80) gpa =  4.00;
        else if(obtained_mark > 74 && obtained_mark < 80)gpa = 3.75;
        else if(obtained_mark > 69 && obtained_mark < 75)gpa =  3.50;
        else if(obtained_mark > 64 && obtained_mark < 70)gpa =  3.25;
        else if(obtained_mark > 59 && obtained_mark < 65)gpa = 3.00;
        else if(obtained_mark > 54 && obtained_mark < 60)gpa = 2.75;
        else if(obtained_mark > 49 && obtained_mark < 55)gpa = 2.50;
        else gpa =  0;
        return gpa;
    }
    void willGraduate(){
        if (gpa)cout << "This student will graduate " << endl;
        else cout << "This student will not graduate " << endl;
        
    }
    float updatedGPA(){
        gpa = gpa + (gpa*.1);
        return gpa;
    }

   
};

int main(){
    Student Student1;
    Student1.setDetails("Ali" , "Ahmed", 2123 , 2001 , "DBMS" , 67 );
    cout << "After inputting details" <<endl;
    Student1.printTranscript();
    cout << "Current GPA: " << Student1.displayGPA() << endl;
    cout <<"After increment : " << Student1.updatedGPA() << endl;
    Student1.willGraduate();
}

