#include <iostream>
using namespace std;

int main() {
    string cmd;
    cin>>cmd;

    if(cmd=="GET") cout<<"Fetching data";
    else if(cmd=="POST") cout<<"Saving data";
}
