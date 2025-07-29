#include <bits/stdc++.h>

using namespace std;

struct Book {
    int bookId;
    string bookName;
    string authorName;
    Book* next;
};

class Library {
private:
    Book* head;

public:
    Library() {
        head = nullptr;
    }

    void addBook(int bookId, const string& bookName, const string& authorName) {
        Book* newBook = new Book;
        newBook->bookId = bookId;
        newBook->bookName = bookName;
        newBook->authorName = authorName;
        newBook->next = nullptr;

        if (head == nullptr) {
            head = newBook;
        } else {
            Book* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newBook;
        }
        cout << "Book added successfully." << endl;
    }

    void removeBook(int bookId) {
        if (head == nullptr) {
            cout << "Library is empty." << endl;
            return;
        }

        if (head->bookId == bookId) {
            Book* temp = head;
            head = head->next;
            delete temp;
            cout << "Book removed successfully." << endl;
            return;
        }

        Book* current = head;
        while (current->next != nullptr && current->next->bookId != bookId) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Book* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Book removed successfully." << endl;
        } else {
            cout << "Book not found in the library." << endl;
        }
    }

    void displayBooks() {
        if (head == nullptr) {
            cout << "Library is empty." << endl;
            return;
        }

        cout << "List of available books:" << endl;
        Book* current = head;
        while (current != nullptr) {
            cout << "Book ID: " << current->bookId << ", Book Name: " << current->bookName
                 << ", Author: " << current->authorName << endl;
            current = current->next;
        }
    }

    void searchBook(int key, bool byBookId) {
        if (head == nullptr) {
            cout << "Library is empty." << endl;
            return;
        }

        Book* current = head;
        bool found = false;
        while (current != nullptr) {
            if ((byBookId && current->bookId == key) ||
                (!byBookId && current->bookName == to_string(key))) {
                cout << "Book ID: " << current->bookId << ", Book Name: " << current->bookName
                     << ", Author: " << current->authorName << endl;
                found = true;
            }
            current = current->next;
        }

        if (!found) {
            cout << "Book not found in the library." << endl;
        }
    }
};

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Remove a book" << endl;
        cout << "3. Display all available books" << endl;
        cout << "4. Search by Book ID" << endl;
        cout << "5. Search by Book Name" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int bookId;
                string bookName, authorName;
                cout << "Enter Book ID: ";
                cin >> bookId;
                cin.ignore();
                cout << "Enter Book Name: ";
                getline(cin, bookName);
                cout << "Enter Author Name: ";
                getline(cin, authorName);
                library.addBook(bookId, bookName, authorName);
                break;
            }
            case 2: {
                int bookId;
                cout << "Enter Book ID to remove: ";
                cin >> bookId;
                library.removeBook(bookId);
                break;
            }
            case 3:
                library.displayBooks();
                break;
            case 4: {
                int bookId;
                cout << "Enter Book ID to search: ";
                cin >> bookId;
                library.searchBook(bookId, true);
                break;
            }
            case 5: {
                string bookName;
                cout << "Enter Book Name to search: ";
                cin.ignore();
                getline(cin, bookName);
                library.searchBook(stoi(bookName), false);
                break;
            }
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
