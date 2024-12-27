#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

struct ContactStruct{
    // attributes for contact
    int id;
    string fname, lname, address, email;
    string fullname;

    // constructor to set fullname
    ContactStruct(int id, string fname, string lname, string address, string email)
    : id(id), fname(fname), lname(lname), address(address), email(email) {
        fullname = fname + " " + lname;
    }

    // function to display contact details
    void display() const {
        cout << "Contact ID: " << id << "\nName: " << fullname << "\nEmail: " << email << "\nAddress: " << address << endl;
    }
};

// Function prototypes
void createContact();
void readContact();
void updateContact();
void deleteContact();
vector<ContactStruct> loadContact();
void saveContact(const vector<ContactStruct>& contacts);

vector<ContactStruct> contactList;
const string filename = "contacts.txt";

int main() {
    contactList = loadContact();

    int choice;
    do {
        cout << "\nContact Management System\n";
        cout << "1. Create Contact\n";
        cout << "2. Read Contacts\n";
        cout << "3. Update Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createContact();
                break;
            case 2:
                readContact();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                saveContact(contactList);
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

vector<ContactStruct> loadContact() {
    vector<ContactStruct> contacts;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            int id;
            string fname, lname, address, email;
            ss >> id >> fname >> lname >> address >> email;
            contacts.emplace_back(id, fname, lname, address, email);
        }
        file.close();
    }
    return contacts;
}

void saveContact(const vector<ContactStruct>& contacts) {
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto& contact : contacts) {
            file << contact.id << " " << contact.fname << " " << contact.lname << " " << contact.address << " " << contact.email << "\n";
        }
        file.close();
    }
}

void createContact() {
    int id;
    string fname, lname, address, email;
    cout << "Enter Contact ID: ";
    cin >> id;
    cout << "Enter First Name: ";
    cin >> fname;
    cout << "Enter Last Name: ";
    cin >> lname;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Email: ";
    cin >> email;
    contactList.emplace_back(id, fname, lname, address, email);
}

void readContact() {
    for (const auto& contact : contactList) {
        contact.display();
    }
}

void updateContact() {
    int id;
    cout << "Enter Contact ID to update: ";
    cin >> id;
    for (auto& contact : contactList) {
        if (contact.id == id) {
            cout << "Enter new First Name: ";
            cin >> contact.fname;
            cout << "Enter new Last Name: ";
            cin >> contact.lname;
            cout << "Enter new Address: ";
            cin >> contact.address;
            cout << "Enter new Email: ";
            cin >> contact.email;
            contact.fullname = contact.fname + " " + contact.lname;
            break;
        }
    }
}

void deleteContact() {
    int id;
    cout << "Enter Contact ID to delete: ";
    cin >> id;
    contactList.erase(remove_if(contactList.begin(), contactList.end(), [&id](const ContactStruct& contact) {
        return contact.id == id;
    }), contactList.end());
}