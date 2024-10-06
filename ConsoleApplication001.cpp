#include <iostream>
#include <string>
using namespace std;
class DynamicArray
{
    private:
        int* arr;
        int size;
    public:
        DynamicArray() : arr(), size(0) {}

        ~DynamicArray() {
            delete[] arr;
        }

        void addElement(int num) {
            int* newArr = new int[size + 1];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            newArr[size] = num;
            delete[] arr;
            arr = newArr;
            size++;
        }

        void showSize() {
            cout << "Размер массива: " << size << endl;
        }

        void showElements() {
            for (int i = 0; i < size; i++) {
                cout << i << ": " << arr[i] << endl;
            }
        }

        void nullArray() {
            delete[] arr;
            arr = nullptr;
            size = 0;
        }

        void delLastNum() {
            if (size > 0) {
                int* newArr = new int[size - 1];
                for (int i = 0; i < size - 1; i++) {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
                size--;
            }
            else {
                cout << "Массив уже пуст!" << endl;
            }
        }

        void showByIndex(int i){
            cout << "Под индексом " << i << " стоит " << arr[i] << endl;
        }
    };

int main() {
    setlocale(LC_ALL, "rus");
    DynamicArray dyn_arr;

    dyn_arr.addElement(1);
    dyn_arr.addElement(5);
    dyn_arr.addElement(6);
    dyn_arr.addElement(9);
    dyn_arr.addElement(2);

    dyn_arr.showSize();
    dyn_arr.showElements();

    dyn_arr.showByIndex(2);

    dyn_arr.addElement(4);
    dyn_arr.showSize();
    dyn_arr.showElements();

    dyn_arr.delLastNum();
    dyn_arr.showSize();
    dyn_arr.showElements();

    dyn_arr.nullArray();
    dyn_arr.showSize();
}