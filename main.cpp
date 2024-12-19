#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

/*class Contact {
private:
    int id;
    string name,email,phone;

public:
    // Constructor
    Contact():id(0),name(""),phone(""),email(""){};
    Contact(int id,const string & name,const string& phone,const string& email): id(id),name(name),phone(phone),email(email){};
    // Getter functions
    int getid()const{return id;}
    string getname()const {return name;}
    string getemail()const{return email;}
    string getphone()const{return phone;}
    // Setter functions
    void setname(string&newName){name=newName;}
    void setid(int new_id){id=new_id;}
    void setemail(string&newEmail){email=newEmail;}
    void setphone(string&phoneNo){phone=phoneNo;}
    // Display function
    // Save contact to file
    // Load contact from str

// Function prototypes
/*void createContact(vector<Contact>& contacts);
void readContacts(const vector<Contact>& contacts);
void updateContact(vector<Contact>& contacts);
void deleteContact(vector<Contact>& contacts);
void saveContactsToFile(const vector<Contact>& contacts);
void loadContactsFromFile(vector<Contact>& contacts);*/
class Contact{
private:
    string name,email,address,phone;
    int id{};
};
const string contactFile = "contacts.txt";
vector<Contact> contacts;


int main(){

}
void createContact(vector<Contact>& contacts) {
}
void readContacts(const vector<Contact>& contacts) {
}
void updateContact(vector<Contact>& contacts) {
}
void deleteContact(vector<Contact>& contacts) {
}
void saveContactsToFile(const vector<Contact>& contacts) {
}
void loadContactsFromFile(vector<Contact>& contacts) {
}
