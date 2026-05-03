#include <iostream>
using namespace std;

int main() {
    string log;
    int errors=0;

    for(int i=0;i<3;i++) {
        cin>>log;
        if(log=="ERROR") errors++;
    }

    cout<<errors;
}
