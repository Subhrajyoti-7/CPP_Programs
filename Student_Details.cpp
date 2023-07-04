#include<iostream>
#include<string.h>
#define size 1
using namespace std;

struct Student{
    int mark;
    int roll;
    char redg[15];
    char name[30];
    void input(){
        static int s=1;
        cout << "\nEnter student-" << s <<" name : ";
        cin >> name;
        cout << "Enter student-" << s <<" roll number : ";
        cin >> roll;
        cout << "Enter student-" << s <<" Redg.Number : ";
        cin >> redg;
        cout << "Enter student-" << s <<" total mark : ";
        cin >> mark;
        s++;
    }

    void Show(){
        static int s=1;
        cout << "\n\nDetails of Student " << s;
        cout << "\n--------------------\n";
        cout << "Student's Name\t: " << name << endl;
        cout << "Roll Number\t: " << roll << endl;
        cout << "Redg.Number\t: " << redg << endl;
        cout << "Mark Secured\t: " << mark << endl;
        s++;
    }
};

void Show(){

}
int main() {
    Student sDetail[size];
    int i;
    for(i=0 ; i<size ; i++){
        sDetail[i].input();
    }
    cout << endl;
    for(i=0 ; i<size ; i++){
        sDetail[i].Show();
    }
    cout << "\n----------Program Ended----------\n" << endl;
    return 0;
}