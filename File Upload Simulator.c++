#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;
    cin >> data;

    ofstream f("upload.txt");
    f<<data;

    cout<<"Uploaded";
}
