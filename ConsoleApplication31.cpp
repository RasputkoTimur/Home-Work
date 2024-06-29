#include <iostream>

int** createAndFillArray(int m, int n) {
    int** array = new int* [m];

    for (int i = 0; i < m; ++i) {
        array[i] = new int[n]; 

        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 + 1;
        }
    }

    return array;
}

int** deleteRowAndColumn(int** array, int rowIndex, int colIndex, int m, int n) {
    
    int** buf = new int* [m - 1];
    for (int i = 0; i < m - 1; ++i) {
        buf[i] = new int[n - 1];
    }

    
    int newRow = 0;
    for (int i = 0; i < m; ++i) {
        if (i == rowIndex) continue; 
        int newCol = 0;
        for (int j = 0; j < n; ++j) {
            if (j == colIndex) continue;
            buf[newRow][newCol] = array[i][j];
            ++newCol;
        }
        ++newRow;
    }


    delete[] array;
    array = buf;

    return array;
}

void rotateArray90Degrees(int** array) {

    int n = sizeof(array) / sizeof(array[0]);

    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; ++i) {
            int offset = i - first;
            int top = array[first][i];
            array[first][i] = array[last - offset][first];
            array[last - offset][first] = array[last][last - offset];
            array[last][last - offset] = array[i][last];
            array[i][last] = top;
        }
    }
}

int** fillSpirally(int m, int n) {

    int** result = new int* [m];
    for (int i = 0; i < m; ++i)
        result[i] = new int[n];


    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; ++col)
            result[top][col] = value++;
        ++top;

        for (int row = top; row <= bottom; ++row)
            result[row][right] = value++;
        --right;

        if (top <= bottom) {

            for (int col = right; col >= left; --col)
                result[bottom][col] = value++;
            --bottom;
        }

        if (left <= right) {

            for (int row = bottom; row >= top; --row)
                result[row][left] = value++;
            ++left;
        }
    }

    return result;
}

void deleteElementAt(int** array, int rowIndex, int colIndex) {
    int rows = sizeof(array) / sizeof(array[0]);
    int cols = sizeof(array[0]) / sizeof(int);

    for (int i = rowIndex; i < rows - 1; ++i) {
        for (int j = colIndex; j < cols; ++j) {
            array[i][j] = array[i + 1][j];
        }
    }

    for (int i = 0; i < rows - 1; ++i) {
        array[i] = array[i + 1];
    }
}



int main()
{
    
}

