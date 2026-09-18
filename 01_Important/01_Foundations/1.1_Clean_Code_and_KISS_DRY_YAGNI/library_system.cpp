#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <memory>

using namespace std;

template <typename T>
class IItemManager {
public:
    virtual void processItem(T item) = 0;
    virtual ~IItemManager() = default;
};

class BaseEntity {
protected:
    string id;
    string createdAt;
    bool isActive;
public:
    BaseEntity(string id) : id(id), isActive(true) {}
    virtual string getId() const { return id; }
    virtual ~BaseEntity() = default;
};

class Book : public BaseEntity {
public:
    string title;
    bool isAvailable;
    Book(string id, string title) : BaseEntity(id), title(title), isAvailable(true) {}
};

class User : public BaseEntity {
public:
    string name;
    User(string id, string name) : BaseEntity(id), name(name) {}
};

class LibrarySystem {
private:
    unordered_map<string, shared_ptr<Book>> books;
    unordered_map<string, shared_ptr<User>> users;
    vector<string> transactionLogs;

public:
    void addBook(string id, string title) {
        books[id] = make_shared<Book>(id, title);
    }

    void registerUser(string id, string name) {
        users[id] = make_shared<User>(id, name);
    }

    void borrowBook(string userId, string bookId) {
        if (users.find(userId) == users.end()) {
            cout << "Error: User not found!" << endl;
            return;
        }
        if (books.find(bookId) == books.end()) {
            cout << "Error: Book not found!" << endl;
            return;
        }

        auto book = books[bookId];
        if (!book->isAvailable) {
            cout << "Error: Book is already borrowed!" << endl;
            return;
        }

        book->isAvailable = false;
        transactionLogs.push_back("User " + userId + " borrowed " + bookId);
        cout << "Successfully borrowed book." << endl;
    }

    void returnBook(string userId, string bookId) {
        if (users.find(userId) == users.end()) {
            cout << "Error: User not found!" << endl;
            return;
        }
        if (books.find(bookId) == books.end()) {
            cout << "Error: Book not found!" << endl;
            return;
        }

        auto book = books[bookId];
        book->isAvailable = true;
        transactionLogs.push_back("User " + userId + " returned " + bookId);
        cout << "Successfully returned book." << endl;
    }
};

int main() {
    LibrarySystem lib;
    lib.addBook("B1", "Effective C++");
    lib.registerUser("U1", "Alice");

    lib.borrowBook("U1", "B1");
    lib.returnBook("U1", "B1");

    return 0;
}
