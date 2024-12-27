#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
struct ContactStruct{
//    attributes for contact
    int id;
    string fname,lname,address,email;
    string fullname=fname+" "+lname;
//    function to display contact details
    void display() const{
        cout<<"Contact ID:"<<id<<"Name: "<<fullname<<"\nEmail: "<<email<<"\nAddress: "<<address<<endl;
    }
};
// Function prototypes
void createContact();
void readContact();
void updateContact();
void deleteContact();
vector<ContactStruct>loadContact();
void saveContact(const vector<ContactStruct>& products);

vector<ContactStruct> contactList;

const string filename = "contacts.txt";
int main(){
   contactList=loadContact();
}
vector<ContactStruct> loadContact(){
    ContactStruct contacts;

    return contacts;
}
//functiin to add contacys