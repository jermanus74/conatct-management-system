#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
class Contact{
private:
    string name,email,address,phone;
    int id{};
};
void createContact();
void viewContact();
void editContact();
void deleteContact();
void clearContact();
void closeProgram();
const string contactFile = "contacts.txt";
vector<Contact> contacts;


int main(){
int choice{};
cout<<"-----------------Welcome to Contact Management System-----------------\n"<<endl;
cout<<"Do you want to?\n"
      "1.Add contact\n"
      "2.View contact\n"
      "3.Edit contact\n"
      "4.Delete contact\n"
      "5.Clear the contact list\n"
      "6.Close the program"<<endl;
cout<<"Enter your choice: "<<endl;
cin>>choice;
    switch (choice) {
        case 1:
            createContact();
            break;
        case 2:
            void viewContact();
            break;
        case 3:
            void editContact();
            break;
        case 4:
            void deleteContact();
            break;
        case 5:
            void clearContact();
            break;
        case 6:
            void closeProgram();
            break;
        default:
            cout<<"Invalid selection.Try again"<<endl;
            main();
    }
}
void createContact() {
}
void viewContact() {
}
void editContact() {
}
void deleteContact() {
}
void clearContact() {
}
void closeProgram() {
}
