#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

struct ContactStruct{
//    attributes for contact

    string fullname,address,email,id,phoneNo;

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
vector<ContactStruct> loadContact();
void saveContact(const vector<ContactStruct>& contacts);

//contact storage room
//vector<ContactStruct> contactList=loadContact();
vector<ContactStruct> contactList;

const string contact_file = "contacts.txt";
int main(){
    int choice{};
//   contactList =loadContact();
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
        idExist=false;
        emailExist=false;
        pExist=false;
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
        cout<<"Enter contact ID: ";
        getline(cin,contacts.id);
        for (const auto& Cid: contactList) {
            if (contacts.id==Cid.id){
                idExist=true;
                cout<<"Contact ID already exists.Enter another ID to conitnue"<<endl;
                break;
            }
        }
        cout<<"Enter phone number: ";
        getline(cin,contacts.phoneNo);
        for (const auto&pId:contactList) {
            if (contacts.phoneNo==pId.phoneNo){
                pExist=true;
                cout<<"Phone number already exists.Enter another number to continue"<<endl;
                break;
            }
        }

        cout<<"Enter email: ";
        getline(cin,contacts.email);
        for (const auto&emailId:contactList) {
            if (contacts.email==emailId.email){
                emailExist=true;
                cout<<"Email already exists.Enter another email to continue"<<endl;
                break;
            }
        }
    }while(fnameExist||idExist||emailExist||pExist);

   contactList.push_back(contacts);
//    saveContact(contactList);
    cout << "Account created successfully!" << endl;
}
/*vector<ContactStruct> loadContact(){
    cout<<"Not implemented"<<endl;

}*/
//void saveContact(const vector<ContactStruct>& contacts){
//    cout<<"Not implemented"<<endl;
//}

/*
vector<userDb> loadUser() {
    vector<userDb> users;
    ifstream file(UserProfile);

    if (file.is_open()) {
        userDb Account;
        while (getline(file, Account.full_name)) {
            getline(file, Account.id);
            getline(file, Account.password);
            getline(file, Account.status);
            users.push_back(Account);
        }
        file.close();
    } else {
        cout << "No existing user database found. Starting fresh." << endl;
    }

    return users;
}

void saveUser(const vector<userDb> &users) {
    ofstream file(UserProfile, ios::in);

    if (file.is_open()) {
        for (const auto &user : users) {
            file << user.full_name << endl
                 << user.id << endl
                 << user.password << endl
                 << user.status << endl;
        }
        file.close();
    } else {
        cout << "Failed to open file for saving. Please try again." << endl;
    }
}

void ReadUserDetails() {
    if (userList.empty()) {
        cout << "No users found. Please sign up to add users." << endl;
    } else {
        cout << "\n----- User List -----" << endl;
        for (const auto &user : userList) {
            user.display();
            cout << "-------------------" << endl;
        }
    }
}
*/
