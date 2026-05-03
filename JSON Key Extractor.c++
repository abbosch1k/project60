#include <iostream>
using namespace std;

int main() {
    string json = "{name:John}";

    if(json.find("name")!=string::npos)
        cout<<"Key found";
}
