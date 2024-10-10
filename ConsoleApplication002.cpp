#include <iostream>
using namespace std;

class Man {
private:
    char* FIO;
public:
    Man(char* Name) {
        FIO = new char[strlen(Name) + 1];
        this->FIO = Name;
    }

    Man(Man& other) {
        FIO = new char[strlen(other.FIO) + 1];
        this->FIO = other.FIO;
    }

    ~Man() {
        delete[] FIO;
    }

    void print() const {
        cout << FIO << endl;
    }
};

class Apart {
private:
    Man** lodger;
    int nums;
public:
    Apart() : lodger(nullptr), nums(0) {}

    void newMan(const Man& temp) {
        Man** newLodger = new Man * [nums + 1];
        for (int i = 0; i < nums; i++) {
            newLodger[i] = lodger[i];
        }
        newLodger[nums] = new Man(temp);
        delete[] lodger;
        lodger = newLodger;
        nums++;
    }

    ~Apart() {
        for (int i = 0; i < nums; i++) {
            delete lodger[i];
        }
        delete[] lodger;
    }

    void show() const {
        for (int i = 0; i < nums; i++) {
            lodger[i]->print();
        }
    }
};

class House {
private:
    Apart* apart;
    int lodgerCount;
public:
    House(int size) : lodgerCount(size) {
        apart = new Apart[lodgerCount];
    }

    ~House() {
        delete[] apart;
    }

    void showLodgers(int numHouse, const Man& lodger) {
        if (numHouse < lodgerCount) {
            apart[numHouse].newMan(lodger);
        }
        else {
            cout << "Ошибка: квартира не найдена!" << endl;
        }
    }
};

int main() {

}
