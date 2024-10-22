#include <iostream>
using namespace std;

template<typename T>
T findMax(T a, T b) {
	return max(a, b);
}

template<typename T>
T findMin(T a, T b) {
	return min(a, b);
}

template<typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template<typename T>
int binarySearch(T arr[], int size, T key) {
    int l = 0, r = size - 1;
    while (l <= r) {
        int centre = l + (r - l) / 2;
        if (arr[centre] == key)
            return centre;
        else if (arr[centre] < key)
            l = centre + 1;
        else
            r = centre - 1;
    }
}

template<typename T>
void addElement(T arr[], int id, T num, int size) {
    if (id >= 0 && id < size) {
        arr[id] = num;
    }
    else {
        cout << "Неверный и."
    }
}





int main()
{
	

}
#include <iostream>
using namespace std;

template<typename T>
T findMax(T a, T b) {
	return max(a, b);
}

template<typename T>
T findMin(T a, T b) {
	return min(a, b);
}

template<typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template<typename T>
int binarySearch(T arr[], int size, T key) {
    int l = 0, r = size - 1;
    while (l <= r) {
        int centre = l + (r - l) / 2;
        if (arr[centre] == key)
            return centre;
        else if (arr[centre] < key)
            l = centre + 1;
        else
            r = centre - 1;
    }
}

template<typename T>
void addElement(T arr[], int id, T num, int size) {
    if (id >= 0 && id < size) {
        arr[id] = num;
    }
    else {
        cout << "Неверный индкс.";
    }
}






int main()
{
	

}
