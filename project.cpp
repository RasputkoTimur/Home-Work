#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

enum class Category {
    ELECTRONICS,
    CLOTHING,
    BOOKS,
    BEAUTY,
    SPORTS
};

struct Product {
    int id;
    string name;
    Category category;
    double price;
    int amount;
};

struct Store {
    Product* products;
    int currentCount;
};

void addProduct(Store& store, const Product& product) {
    Product* newProducts = new Product[store.currentCount + 1];

    for (int i = 0; i < store.currentCount; ++i) {
        newProducts[i] = store.products[i];
    }

    newProducts[store.currentCount] = product;

    delete[] store.products;
    store.products = newProducts;
    store.currentCount++;
}

void removeProduct(Store& store, int productId) {
    int index = -1;
    for (int i = 0; i < store.currentCount; ++i) {
        if (store.products[i].id == productId) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int j = index; j < store.currentCount - 1; ++j) {
            store.products[j] = store.products[j + 1];
        }
        store.currentCount--;
    }
    else {
        cout << "Продукт с таким Id не найден. (Id: " << productId << ")" << endl;
    }
}

void displayProducts(const Store& store) {
    cout << "Список продуктов: " << endl;
    for (int i = 0; i < store.currentCount; ++i) {
        cout << "Id: " << store.products[i].id << "\nНазвание: " << store.products[i].name <<"\nЦена: " << store.products[i].price << "\nКолличество: " << store.products[i].amount << endl;
    }
    cout << endl;
}

void saveToFile(const Store& store, string filename) {
    ofstream out;
    out.open(filename, ios::app);

    if (out.is_open())
    {
        for (int i = 0; i < store.currentCount; i++)
        {
            out << store.products[i].id << "||" << store.products[i].name << "||" << store.products[i].amount << "||" << store.products[i].price << "||" << endl;
        }
    }

    out.close();
}

void loadFromFile(Store& store, const char* filename) {
    ifstream in;

    store.products = new Product[store.currentCount];

    for (int i = 0; i < store.currentCount; ++i) {
        store.products[i].id = 
    }

    in.close();
}




int main() {
    Store myStore;
    myStore.products = nullptr;
    myStore.currentCount = 0;

    Product p1 = { 1, "Мышка", Category::ELECTRONICS, 1500.0, 10 };
    Product p2 = { 2, "Книга", Category::BOOKS, 55.5, 4 };

    addProduct(myStore, p1);
    addProduct(myStore, p2);


    displayProducts(myStore);

    saveToFile(myStore, "text.txt");

    removeProduct(myStore, 1);

    displayProducts(myStore);

    loadFromFile(myStore, "text.txt");

    displayProducts(myStore);

}