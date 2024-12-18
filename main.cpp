#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class Contact {
private:
    int id;
    string name;
    string phone;

public:
    // Constructor
    Contact() : id(0), name(""), phone("") {}

    Contact(int id, const string& name, const string& phone) : id(id), name(name), phone(phone) {}

    // Getter functions
    int getId() const { return id; }
    string getName() const { return name; }
    string getPhone() const { return phone; }

    // Setter functions
    
};

// Function prototypes
void createContact(vector<Contact>& contacts);
void readContacts(const vector<Contact>& contacts);
void updateContact(vector<Contact>& contacts);
void deleteContact(vector<Contact>& contacts);
void saveContactsToFile(const vector<Contact>& contacts);
void loadContactsFromFile(vector<Contact>& contacts);

const string contactFile = "contacts.txt";

int main() {
    vector<Contact> contacts;
    loadContactsFromFile(contacts);

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
}

void createContact(vector<Contact>& contacts) {
    int id;
    string name, phone;

    cout << "Enter Contact ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Contact Name: ";
    getline(cin, name);

    cout << "Enter Phone Number: ";
    getline(cin, phone);

    contacts.emplace_back(id, name, phone);
    cout << "Contact created successfully.\n";
}

void readContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts to display.\n";
        return;
    }

    cout << "\n--- Contact List ---\n";
    for (const auto& contact : contacts) {
        contact.display();
    }
}

void updateContact(vector<Contact>& contacts) {
    int id;
    cout << "Enter the ID of the contact to update: ";
    cin >> id;
    cin.ignore();

    for (auto& contact : contacts) {
        if (contact.getId() == id) {
            string name, phone;

            cout << "Enter new Name: ";
            getline(cin, name);

            cout << "Enter new Phone Number: ";
            getline(cin, phone);

            contact.setName(name);
            contact.setPhone(phone);

            cout << "Contact updated successfully.\n";
            return;
        }
    }

    cout << "Contact with ID " << id << " not found.\n";
}

void deleteContact(vector<Contact>& contacts) {
    int id;
    cout << "Enter the ID of the contact to delete: ";
    cin >> id;
    cin.ignore();

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->getId() == id) {
            contacts.erase(it);
            cout << "Contact deleted successfully.\n";
            return;
        }
    }

    cout << "Contact with ID " << id << " not found.\n";
}

void saveContactsToFile(const vector<Contact>& contacts) {
    ofstream file(contactFile, ios::trunc);
    if (file.is_open()) {
        for (const auto& contact : contacts) {
            contact.saveToFile(file);
        }
        file.close();
        cout << "Contacts saved to file successfully.\n";
    } else {
        cerr << "Error saving contacts to file.\n";
    }
}

void loadContactsFromFile(vector<Contact>& contacts) {
}
