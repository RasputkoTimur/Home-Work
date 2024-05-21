#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream in("text.txt");
    ofstream out("text(copy).txt");

    int max_line_length;
    cout << "Введите максимальную длину строки: ";
    cin >> max_line_length;

    string line;
    while (getline(in, line)) {
        if (line.length() <= max_line_length) {
            out << line << endl;
        }
    }
    in.close();
    out.close();

}
