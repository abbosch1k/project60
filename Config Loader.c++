#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("config.txt");
    string key,value;

    while(f>>key>>value)
        cout<<key<<"="<<value<<endl;
}
