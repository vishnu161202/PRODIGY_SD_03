# Implement a Simple Contact Management System

## Problem Solution: 
Develop a program that allows users to store and manage contact information. The program should provide options to add a new contact by entering their name, phone number, and email address. It should also allow users to view their contact list, edit existing contacts, and delete contacts if needed. The program should store the contacts in memory or in a file for persistent storage.

## Solution: 
### Data Structure:
Defines a Contact structure with fields for name, phone number, and email.
Uses an array contacts to store contact information, with a maximum capacity of MAX_CONTACTS.

### Functions:
addContact(): Adds a new contact to the system if there is space available in the array.
viewContacts(): Displays the list of contacts stored in the system.
deleteContact(): Deletes a contact based on the input name.
editContact(): Edits the phone number and email of a contact based on the input name.

### Menu Driven Interface:
Uses a switch statement in the main() function to present a menu of options to the user.
The user can choose to add, view, edit, or delete contacts, or exit the program.

### Error Handling:
Checks for invalid inputs and provides appropriate error messages (e.g., full contact list, contact not found).

### Loop:
The program continues to display the menu until the user chooses to exit.
