#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Contact {
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


    // Load contact from string


};

// Function prototypes
/*void createContact(vector<Contact>& contacts);
void readContacts(const vector<Contact>& contacts);
void updateContact(vector<Contact>& contacts);
void deleteContact(vector<Contact>& contacts);
void saveContactsToFile(const vector<Contact>& contacts);
void loadContactsFromFile(vector<Contact>& contacts);*/

const string contactFile = "contacts.txt";
vector<Contact> contacts;


int main() {
    // Create a contact using the default constructor
    Contact contact1;

    // Update contact1's details
    string name = "Alice";
    string phone = "123-456-7890";
    string email = "alice@example.com";
    contact1.setid(1);
    contact1.setname(name);
    contact1.setphone(phone);
    contact1.setemail(email);

    // Print contact1's details
    cout << "Contact 1: " << contact1.getid() << ", " << contact1.getname() << ", "
         << contact1.getphone() << ", " << contact1.getemail() << endl;

    // Create a contact using the parameterized constructor
    Contact contact2(2, "Bob", "098-765-4321", "bob@example.com");

    // Print contact2's details
    cout << "Contact 2: " << contact2.getid() << ", " << contact2.getname() << ", "
         << contact2.getphone() << ", " << contact2.getemail() << endl;

    return 0;
}

/*int main() {
    int choice;
    do {
        cout << "\n--- Contact Management System ---\n"
             << "1. Create Contact\n"
             << "2. Read Contacts\n"
             << "3. Update Contact\n"
             << "4. Delete Contact\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                createContact(contacts);
                break;
            case 2:
                readContacts(contacts);
                break;
            case 3:
                updateContact(contacts);
                break;
            case 4:
                deleteContact(contacts);
                break;
            case 5:
                saveContactsToFile(contacts);
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid input. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}*/
/*void createContact(vector<Contact>& contacts) {
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
}*/
