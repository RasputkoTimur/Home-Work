#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <stdlib.h>
#include "windows.h"

int getFileSize(string path) {
    ifstream in(path);
    int count = 0;
    if (in.is_open()) {
        string str;
        while (getline(in, str)) {
            count++;
        }
    }
    in.close();
    return count;
}

void readFile(string*& arr, int& size, string PATH) {
    size = getFileSize(PATH);
    arr = new string[size];
    if (size > 0) {
        ifstream in(PATH);
        if (in.is_open()) {
            int index = 0;
            string str;
            while (getline(in, str)) {
                arr[index++] = str;
            }
        }
    }
}

void showTasks(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << arr[i] << endl;
    }
}

void addTask(string*& arr, int& size, string str) {
    string* buf = new string[size + 1];
    for (int i = 0; i < size; i++) {
        buf[i] = arr[i];
    }
    buf[size++] = str;
    delete[] arr;
    arr = buf;
}

void deleteTask(string*& arr, int& size, int index) {
    if (index >= 0 && index < size) {
        string* buf = new string[size - 1];
        for (int i = 0; i < index; i++) {
            buf[i] = arr[i];
        }
        for (int i = index + 1; i < size; i++) {
            buf[i - 1] = arr[i];
        }
        delete[] arr;
        arr = buf;
        size--;
    }
}

void clearTasks(string*& arr, int& size) {
    delete[] arr;
    arr = nullptr;
    size = 0;
}

int main() {
    setlocale(LC_ALL, "rus");

    srand(time(NULL));
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int size;
    int choice;
    string* tasks;

    readFile(tasks, size, "text.txt");

    string str;

    while (true) {
        showTasks(tasks, size);
        cout << "Сделайте выбор: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            cout << "Введите задачу: ";
            getline(cin, str);
            addTask(tasks, size, str);
            cout << "Задача добавлена";
            Sleep(1000);
            system("cls");
            break;
        case 2:
            int index;
            cout << "Введите номер задачи для удаления: ";
            cin >> index;
            deleteTask(tasks, size, index);
            cout << "Задача удалена";
            Sleep(1000);
            system("cls");
            break;
        case 3:
            clearTasks(tasks, size);
            cout << "Все задачи очищены";
            Sleep(1000);
            system("cls");
            break;
        case 0:
            cout << "Exit" << endl;
            break;
        default:
            break;
        }
    }
}