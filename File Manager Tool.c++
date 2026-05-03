#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename, content;
    int choice;
    
    cout << "=== File Manager ===\n";
    cout << "1. Write to file\n2. Read file\n";
    cin >> choice;
    cin.ignore();
    
    cout << "Enter filename: ";
    getline(cin, filename);
    
    if(choice == 1) {
        ofstream file(filename);
        cout << "Enter content (end with empty line):\n";
        while(getline(cin, content) && !content.empty()) {
            file << content << endl;
        }
        file.close();
    } else {
        ifstream file(filename);
        while(getline(file, content)) {
            cout << content << endl;
        }
    }
    return 0;
}
