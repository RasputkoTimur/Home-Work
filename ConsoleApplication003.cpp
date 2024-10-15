#include <iostream>
#include <string>
using namespace std;

//class MyClass {
//public:
//    int num;
//    static bool flag;
//    MyClass(const MyClass& obj) : MyClass{ obj.num } {}
//    explicit MyClass(int numP) :num{ numP }{}
//    MyClass(int num) {
//        this->num = num;
//    }
//    MyClass(MyClass& obj) {
//        this->num = obj.num;
//    }
//};

//class String {
//public:
//    string str;
//
//      String() {
//          this->str = new char[80];
//        }
//      String(int size) {
//          this->str = new char[size];
//      }
//      String(string text) {
//          this->str = text;
//      }
//      String(String& str) {
//          this->str = str.str;
//      }
//};

//class String {
//public:
//    string str;
//
//    String() : String{str = new char[80]} {}
//    String(int size) : String{ this->str = new char[size] } {};
//    }
//    String(string text) {
//        this->str = text;
//    }
//    String(String& str) {
//        this->str = str.str;
//    }
//};

class Book {
public:
    string author;
    string name;
    string publishingHouse;
    int year;
    int pagesCount;
    explicit Book(string author, string name, string publishingHouse, int year, int pagesCount) {
        this->author = author;
        this->name = name; 
        this->publishingHouse = publishingHouse;
        this->year = year;
        this->pagesCount;
    }
};

void booksByAuthor(Book arr[], string author, int size) {
    cout << "Книги " << author << "а: ";
    for (int i = 0; i < size; i++)
    {
        if (author == arr[i].author) {
            cout << arr[i].name << " ";
        }
    }
}

void booksByPublishingHouse(Book arr[], string publishingHouse, int size) {
    cout << "Книги " << publishingHouse << "а: ";
    for (int i = 0; i < size; i++)
    {
        if (publishingHouse == arr[i].publishingHouse) {
            cout << arr[i].name << " ";
        }
    }
}

void booksAfterYear(Book arr[], int year, int size) {
    cout << "Книги, выпущенные после " << year << " года: ";
    for (int i = 0; i < size; i++)
    {
        if (year <= arr[i].year) {
            cout << arr[i].name << " ";
        }
    }
}

class Complex {
public:
    double num;
    double mnimNum;

    Complex(double num, double mnimNum) {
        this->mnimNum = mnimNum;
        this->num = num;
    }

    const Complex operator+ (Complex fullNum) {
        Complex temp(fullNum.num, fullNum.mnimNum);
        temp.num = this->num + fullNum.num;
        temp.mnimNum = this->mnimNum + fullNum.mnimNum;
        return temp;
    }
    const Complex operator- (Complex fullNum) {
        Complex temp(fullNum.num, fullNum.mnimNum);
        temp.num = this->num - fullNum.num;
        temp.mnimNum = this->mnimNum - fullNum.mnimNum;
        return temp;
    }
    const Complex operator* (Complex fullNum) {
        Complex temp(fullNum.num, fullNum.mnimNum);
        temp.num = (this->num * fullNum.num) - (this->num * fullNum.mnimNum);
        temp.mnimNum = (this->mnimNum * fullNum.mnimNum) - (this->mnimNum * fullNum.num);
        return temp;
    }
    const Complex operator/ (Complex fullNum) {
        Complex temp(fullNum.num, fullNum.mnimNum);
        temp.num = ((this->num * fullNum.num) + (this->mnimNum * fullNum.mnimNum))/((pow(this->mnimNum, 2)) + (pow(fullNum.mnimNum, 2)));
        temp.mnimNum = ((this->mnimNum * fullNum.num) - (this->num * fullNum.mnimNum)) / ((pow(this->mnimNum, 2)) + (pow(fullNum.mnimNum, 2)));
        return temp;
    }

    const bool operator==(Complex fullNum) {
        return this->num == fullNum.num && this->mnimNum == fullNum.mnimNum;
    }

    const bool operator>(Complex fullNum) {
        return this->num > fullNum.num;
    }

    const bool operator<(Complex fullNum) {
        return this->num < fullNum.num;
    }

    const bool operator>=(Complex fullNum) {
        return this->num > fullNum.num || (this->num == fullNum.num && this->mnimNum == fullNum.mnimNum);
    }

    const bool operator<=(Complex fullNum) {
        return this->num < fullNum.num || (this->num == fullNum.num && this->mnimNum == fullNum.mnimNum);
    }

    const bool operator!=(Complex fullNum) {
        return this->num != fullNum.num || this->mnimNum != fullNum.num;
    }

    void print() {
        cout << this->num << " + " << this->mnimNum << " i";
    }
};

void printBull(bool temp) {
    if (temp)
    {
        cout << "Выражение ПРАВДИВО";
    }
    else cout << "Выражение ЛОЖНО";
}


class myArray {
public:
    int size = 0;
    int* arr = new int[size];

    ~myArray() { delete[] arr; }

    int operator[](int i) const {
        return arr[i];
    }
    int& operator[](int i) {
        return this->arr[i];
    }

    int operator()(int i, int power) const {
        return pow(arr[i], power);
    }
    operator bool()const {
        return true;
    }
    operator int()const {
        return 0;
    }
    operator float()const {
        return 0.1;
    }
    operator char()const {
        return 21;
    }

    myArray operator=(myArray arr) const {
        for (int b = 0; b < size; b++) {
            this->arr[b] = arr[b];
        }
        delete[] &arr;
        arr = this->arr;
    }

    void addElem(int elem) {
        int* buf = new int[size + 1];
        for (int b = 0; b < size; b++) {
            buf[b] = arr[b];
        }
        buf[size] = elem;
        delete[] arr;
        arr = buf;
        size++;
    }

    void print() {
        for (int b = 0; b < size; b++) {
            cout << arr[b] << " ";
        }
        cout << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "rus");
    //int size = 15;
    //string text = "1543647";
    //String str1{};
    //cout << str1.str.size() << endl;
    //String str2(size);
    //cout << str2.str.size() << endl;
    //String str3("120412485");
    //cout << str3.str << endl;
    //String str4(text);
    //cout << str4.str << endl;
    
    //const Book b1("Пушкин", "Стих1", "Дом", 1884, 113);
    //const Book b2("НеПушкин", "НеСтих", "НеДом", 1872, 97);
    //const Book b3("ОпятьНеПушкин", "Роман", "Дом", 1995, 243);
    //const Book b4("Пушкин", "Роман", "Дом", 1844, 13);
    //const Book b5("ОпятьНеПушкин", "Стих", "Дом", 1994, 311);
    //Book arr[5]{ b1, b2, b3, b4, b5 };
    //booksByAuthor(arr, "Пушкин", 5);
    //cout << endl;
    //booksByPublishingHouse(arr, "Дом", 5);
    //cout << endl;
    //booksAfterYear(arr, 1885, 5);


    Complex a(5, 6);
    Complex b(6, 7);

    printBull(a > b);

    cout << "\a\n";

    myArray arr;
    arr.addElem(5);
    arr.addElem(3);
    arr.addElem(9);
    arr.addElem(4);
    cout<<"Под индексом 3 стоит: " << arr[2] << endl;

    int power = 3;
    cout << "Возводим число под индексом 3 в степень " << power << " :" << arr(2, power) << endl;


    cout << char(arr);

    int newArr[4];
    arr=newArr;
    arr.print();

}