#include <iostream>
using namespace std;

class Book {
private:
    int book_no;
    string Title;
    string Writer;
    float Amount;
public:
    void getdata();
    void display();
    int searchbook_no(int number);
    void update();
};

void Book::getdata() {
    cout << "Enter the Title of the Book" << endl;
    cin.ignore(); // To ignore the newline character from previous input
    getline(cin, Title);
    cout << "Enter the book no of the Book" << endl;
    cin >> book_no;
    cout << "Enter the Writer of the Book" << endl;
    cin.ignore(); // To ignore the newline character from previous input
    getline(cin, Writer);
    cout << "Enter the Amount of the Book" << endl;
    cin >> Amount;
}

void Book::display() {
    cout << "Title: " << Title << endl
         << "book_no: " << book_no << endl
         << "Writer: " << Writer << endl
         << "Amount: " << Amount << endl;
}

int Book::searchbook_no(int number) {
    if (book_no == number) {
        return 1;
    }
    return 0;
}

void Book::update() {
    int ch;
    cout << "Enter 1 for update Title" << endl
         << "Enter 2 for update book no" << endl
         << "Enter 3 for update Writer" << endl
         << "Enter 4 for update Amount" << endl;
    cin >> ch;
    switch (ch) {
        case 1:
            cout << "Enter the new Title" << endl;
            cin.ignore(); // To ignore the newline character from previous input
            getline(cin, Title);
            break;
        case 2:
            cout << "Enter the new book no" << endl;
            cin >> book_no;
            break;
        case 3:
            cout << "Enter the new Writer" << endl;
            cin.ignore(); // To ignore the newline character from previous input
            getline(cin, Writer);
            break;
        case 4:
            cout << "Enter the new Amount" << endl;
            cin >> Amount;
            break;
        default:
            cout << "Invalid choice entered" << endl;
    }
}

int main() {
    Book b[10];
    int choice = 1;
    int n = 0;

    cout << "Enter the number of books: ";
    cin >> n;

    do {
        cout << "Enter 1 for input the data" << endl;
        cout << "Enter 2 for output the data" << endl;
        cout << "Enter 3 for insert the data" << endl;
        cout << "Enter 4 for delete the data" << endl;
        cout << "Enter 5 for search the data" << endl;
        cout << "Enter 6 for update the data" << endl;
        cin >> choice;

        int pos = 0;
        switch (choice) {
            case 1: // Input data
                for (int i = 0; i < n; i++) {
                    b[i].getdata();
                }
                break;

            case 2: // Display data
                for (int i = 0; i < n; i++) {
                    b[i].display();
                }
                break;

            case 3: // Insert data
                cout << "Enter the position of insertion: ";
                cin >> pos;
                for (int i = n; i >= pos; i--) {
                    b[i + 1] = b[i];
                }
                n++;
                b[pos].getdata();
                break;

            case 4: // Delete data
                cout << "Enter the position of deletion: ";
                cin >> pos;
                for (int i = pos; i < n - 1; i++) {
                    b[i] = b[i + 1];
                }
                n--;
                break;

            case 5: // Search data
                cout << "Enter the book no of the book: ";
                cin >> pos;
                for (int i = 0; i < n; i++) {
                    if (b[i].searchbook_no(pos) == 1) {
                        b[i].display();
                    }
                }
                break;

            case 6: // Update data
                cout << "Enter the position of updation: ";
                cin >> pos;
                b[pos].update();
                break;

            default:
                cout << "Enter the input from 1 to 7 only" << endl;
                break;
        }
    } while (choice != 7); // Loop will exit if choice is 7

    return 0;
}