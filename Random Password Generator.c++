#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string password;
    int length;
    
    cout << "=== Password Generator ===\nLength: ";
    cin >> length;
    
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    
    for(int i=0; i<length; i++) {
        password += chars[rand() % chars.length()];
    }
    
    cout << "Generated Password: " << password << endl;
    return 0;
}
