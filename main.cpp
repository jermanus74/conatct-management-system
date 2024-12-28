#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct ContactStruct{
//    attributes for contact

    string fullname,address,email,id,phoneNo;

//    function to display contact details
    void display() const{
        cout<<"Contact ID: "<<id<<"\nName: "<<fullname<<"\nPhone No: "<<phoneNo<<"\nEmail: "<<email<<"\nAddress: "<<address<<endl;
    }
};

// Function prototypes
void createContact();
void readContact();
void updateContact();
void deleteContact();
vector<ContactStruct> loadContact();
void saveContact(const vector<ContactStruct>& contact);

//contact storage room
vector<ContactStruct> contactList;

const string contact_file = "contacts.txt";
int main(){
    int choice{};
   contactList =loadContact();
    // contactList.clear();

   cout<<"-----Welcome to Contacts Management System-----"<<endl;
   cout<<"Do you want to\n"
         "1.Add Contact\n"
         "2.Edit Contact\n"
         "3.Delete Contact\n"
         "4.View Contacts\n"
         "5.Exit"<<endl;
   cout<<"Enter choice: ";
   cin>>choice;
   cin.ignore();

switch(choice){
case 1:
createContact();
break;
case 2:
break;
case 3:
break;
case 4:
    readContact();
break;
case 5:
break;
default:
cout<<"Invalid choice"<<endl;
}
return 0;
}

void createContact(){
    ContactStruct contacts;
    bool idExist,fnameExist,emailExist,pExist;
    do{
        fnameExist=false;
        cout<<"Enter fullname: ";
        getline(cin,contacts.fullname);
//        check if contact name exits from contact list
        for (const auto& cname:contactList) {
            if (contacts.fullname==cname.fullname){
                fnameExist=true;
                cout<<"\nThe name you have entered already exist.Enter another name"<<endl;
                break;
            }
        }
    }while(fnameExist);
    do {
        idExist=false;
        cout<<"Enter contact ID: ";
        getline(cin,contacts.id);
        for (const auto& Cid: contactList) {
            if (contacts.id==Cid.id){
                idExist=true;
                cout<<"Contact ID already exists.Enter another ID to continue"<<endl;
                break;
            }
        }
    } while (idExist);
    do {
        emailExist=false;
        cout<<"Enter email: ";
        getline(cin,contacts.email);
        for (const auto&emailId:contactList) {
            if (contacts.email==emailId.email){
                emailExist=true;
                cout<<"Email already exists.Enter another email to continue"<<endl;
                break;
            }
        }
    } while (emailExist);
    do {
        pExist=false;
        cout<<"Enter phone number: ";
        getline(cin,contacts.phoneNo);
        for (const auto&pId:contactList) {
            if (contacts.phoneNo==pId.phoneNo){
                pExist=true;
                cout<<"Phone number already exists.Enter another number to continue"<<endl;
                break;
            }
        }
    } while (pExist);
    cout<<"Enter your Address: ";
    getline(cin,contacts.address);
    cin.ignore();
   contactList.push_back(contacts);
    saveContact(contactList);
    cout << "Account created successfully!" << endl;
}

vector<ContactStruct> loadContact() {
    vector<ContactStruct> contact;
    if (ifstream file(contact_file); file.is_open()) {
        ContactStruct contacts;
        while (getline(file, contacts.id) &&
               getline(file, contacts.fullname) &&
               getline(file, contacts.email) &&
               getline(file, contacts.phoneNo) &&
               getline(file, contacts.address)) {
            contact.push_back(contacts);
        }
        file.close();
    } else {
        cout << "No existing user database found. Starting fresh." << endl;
    }
//    contact.clear();
    return contact;
}

void saveContact(const vector<ContactStruct>& contact) {
    if (ofstream file(contact_file, ios::trunc); file.is_open()) {
        for (const auto& c : contact) {
            file << c.id << '\n'
                 << c.fullname << '\n'
                 << c.email << '\n'
                 << c.phoneNo << '\n'
                 << c.address << '\n';
        file<<"------------------------------"<<endl;
        }
        file.close();
    } else {
        cout << "No existing user database found. Starting fresh." << endl;
    }
}

void readContact() {
    if (contactList.empty()) {
                           cout<<"No contact data found. Starting fresh." << endl;
    } else {
      cout<<"-------Contact data reading------"<<endl;
        for (const auto& c:contactList) {
            c.display();
            cout<<"---------------------------------"<<endl;
        }
    }
}



