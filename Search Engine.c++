#include <iostream>
using namespace std;

int main() {
    string text="hello world";
    string query;
    cin>>query;

    if(text.find(query)!=string::npos)
        cout<<"Found";
}
