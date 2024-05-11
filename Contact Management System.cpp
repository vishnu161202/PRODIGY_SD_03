#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    string email;
};

const int MAX_CONTACTS = 100;
Contact contacts[MAX_CONTACTS];
int numContacts = 0;

void addContact() {
    if (numContacts < MAX_CONTACTS) {
        Contact newContact;
        cout << "Enter contact name: ";
        cin >> newContact.name;
        cout << "Enter contact phone number: ";
        cin >> newContact.phoneNumber;
        cout << "Enter contact email address: ";
        cin >> newContact.email;

        contacts[numContacts++] = newContact;
        cout << "Contact added successfully!" << endl;
    } else {
        cout << "Cannot add more contacts. Contact list is full." << endl;
    }
}

void viewContacts() {
    if (numContacts == 0) {
        cout << "No contacts found." << endl;
    } else {
        cout << "Contact List:" << endl;
        for (int i = 0; i < numContacts; ++i) {
            cout << "Name: " << contacts[i].name << ", Phone: " << contacts[i].phoneNumber << ", Email: " << contacts[i].email << endl;
        }
    }
}

void deleteContact() {
    if (numContacts == 0) {
        cout << "No contacts to delete." << endl;
        return;
    }

    string searchName;
    cout << "Enter contact name to delete: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < numContacts; ++i) {
        if (contacts[i].name == searchName) {
            for (int j = i; j < numContacts - 1; ++j) {
                contacts[j] = contacts[j + 1];
            }
            numContacts--;
            found = true;
            cout << "Contact deleted successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void editContact() {
    if (numContacts == 0) {
        cout << "No contacts to edit." << endl;
        return;
    }

    string searchName;
    cout << "Enter contact name to edit: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < numContacts; ++i) {
        if (contacts[i].name == searchName) {
            cout << "Enter new phone number: ";
            cin >> contacts[i].phoneNumber;
            cout << "Enter new email address: ";
            cin >> contacts[i].email;
            found = true;
            cout << "Contact edited successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\nContact Management System Menu:\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Edit Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                editContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
