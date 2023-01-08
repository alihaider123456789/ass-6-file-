#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string file1n, file2n;
    int file1Count = 0;
	int file2Count = 0;
    cout << "Enter the name first file: ";
    cin >> file1n;
    cout << "Enter the name scond file: ";
    cin >> file2n;
    ifstream file1(file1n);
    string w;
    while (file1 >> w) {
        file1Count++;
    }

    file1.close();
    ifstream file2(file2n);
    while (file2 >> w) {
        file2Count++;
    }
    file2.close();
    cout << "Number of 1 file words in " << file1n << ": " << file1Count << endl;
    cout << "Number of 2 file words in " << file2n<< ": " << file2Count << endl;
    return 0;
}