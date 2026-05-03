#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int c;
    cin>>c;

    if(c==1) {
        string s;
        cin>>s;
        ofstream f("db.txt", ios::app);
        f<<s<<endl;
    } else {
        ifstream f("db.txt");
        string s;
        while(f>>s) cout<<s<<endl;
    }
}
