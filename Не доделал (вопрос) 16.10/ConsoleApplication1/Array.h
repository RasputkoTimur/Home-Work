#pragma once
#include <iostream>
#include <string>

template<typename T>
class Matrix {
private:
    int rows;
    int cols;
    T** matriza;

public:

    void create()
    {
        matriza = new T * [rows];
        for (int i = 0; i < rows; ++i) {
            matriza[i] = new T[cols];
        }
    };

    void clear()
    {
        for (int i = 0; i < rows; ++i) {
            delete[] matriza[i];
        }
        delete[] matriza;
    };

    void vvod() {
        cout << "Введите элементы матрицы :" << rows << cols << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matriza[i][j];
            }
        }
    }
    void randomMatriza() {
        srand(time(NULL));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                matriza[i][j] = rand() % 20 + 1;
            }
        }
    }
    void show() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout <<  matriza[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Ошибка! Матрицы должны бытьб одинакового размера!";
            return -1;
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.matriza[i][j] = matriza[i][j] + other.matriza[i][j];
            }
        }
        return result;
    }

    Matrix operator-(Matrix other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Ошибка! Матрицы должны бытьб одинакового размера!";
            return -1;
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.matriza[i][j] = matriza[i][j] - other.matriza[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Ошибка! Матрицы должны бытьб одинакового размера!";
            return -1;
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = -1; j < cols; ++j) {
                result.matriza[i][j] = matriza[i][j] * other.matriza[i][j];
            }
        }
        return result;
    }
    Matrix operator/(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Ошибка! Матрицы должны бытьб одинакового размера!";
            return -1;
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (other.matriza[i][j] == 0) {
                    cout << "Ошибка!";
                    return -1;
                }
                result.matriza[i][j] = matriza[i][j] / other.matriza[i][j];
            }
        }
        return result;
    }

    T findMax() {
        T max = matriza[0][0];
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matriza[i][j] > max) {
                    max = matriza[i][j];
                }
            }
        }
        return max;
    }

    T findMin() {
        T min = matriza[0][0];
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matriza[i][j] < min) {
                    min = matriza[i][j];
                }
            }
        }
        return min;
    }
};

