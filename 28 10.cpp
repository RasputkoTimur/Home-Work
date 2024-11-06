#include <iostream>
using namespace std;
#include <iostream>
#include <stdexcept>
#include <string>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(), prev() {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(), tail() {}

    ~DoublyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    void addToHead(int value) {
        try {
            Node* newNode = new Node(value);
            if (isEmpty()) {
                head = tail = newNode;
            }
            else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        catch (bad_alloc&) {
            throw runtime_error("ОШИБКА");
        }
    }

    void addToTail(int value) {
        try {
            Node* newNode = new Node(value);
            if (isEmpty()) {
                head = tail = newNode;
            }
            else {
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
        }
        catch (bad_alloc&) {
            throw runtime_error("ОШИБКА");
        }
    }

    void removeFromHead() {
        if (isEmpty()) {
            throw underflow_error("ОШИБКА");
        }
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        }
        else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    void removeFromTail() {
        if (isEmpty()) {
            throw underflow_error("ОШИБКА");
        }
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        }
        else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }

    int get(int index) const {
        if (isEmpty()) {
            throw out_of_range("ОШИБКА");
        }

        Node* current = head;
        int currentIndex = 0;

        while (current) {
            if (currentIndex == index) {
                return current->data;
            }
            current = current->next;
            currentIndex++;
        }

        throw out_of_range("ОШИБКА");
    }
};

class BaseException : public exception {
protected:
    string message;

public:
    explicit BaseException(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class MemoryException : public BaseException {
public:
    explicit MemoryException(const string& msg = "ОШИБКА")
        : BaseException(msg) {}
};

class FileException : public BaseException {
public:
    explicit FileException(const string& msg = "ОШИБКА")
        : BaseException(msg) {}
};

class FileNotFoundException : public FileException {
public:
    explicit FileNotFoundException(const string& msg = "ОШИБКА")
        : FileException(msg) {}
};

class FileAccessException : public FileException {
public:
    explicit FileAccessException(const string& msg = "ОШИБКА")
        : FileException(msg) {}
};

class MathException : public BaseException {
public:
    explicit MathException(const string& msg = "ОШИБКА") : BaseException(msg) {}
};

class DivisionByZeroException : public MathException {
public:
    explicit DivisionByZeroException(const string& msg = "ОШИБКА") : MathException(msg) {}
};

class OverflowException : public MathException {
public:
    explicit OverflowException(const string& msg = "ОШИБКА")
        : MathException(msg) {}
};

class InvalidArgumentException : public MathException {
public:
    explicit InvalidArgumentException(const string& msg = "ОШИБКА")
        : MathException(msg) {}
};


int main() {
    DoublyLinkedList dll;

    try {
        dll.removeFromHead();
    }
    catch (const exception& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    dll.addToTail(10);
    dll.addToHead(20);

    try {
        cout << "Элемент с индексом 2: " << dll.get(2) << endl;
        cout << "Элемент с индексом 4: " << dll.get(4) << endl;
    }
    catch (const exception& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    try {
        throw DivisionByZeroException();
    }
    catch (const BaseException& e) {
        cerr << "Произошло исключение: " << e.what() << endl;
    }

    try {
        throw FileNotFoundException("ОШИБКА");
    }
    catch (const BaseException& e) {
        cerr << "Произошло исключение: " << e.what() << endl;
    }

    try {
        throw InvalidArgumentException("ОШИБКА");
    }
    catch (const BaseException& e) {
        cerr << "Произошло исключение: " << e.what() << endl;
    }
}
