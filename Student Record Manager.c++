#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    double gpa;
};

int main() {
    vector<Student> students;
    int choice;
    
    do {
        cout << "\n=== Student Record Manager ===\n";
        cout << "1. Add Student\n2. Show All\n3. Search\n4. Exit\n";
        cin >> choice;
        
        if(choice == 1) {
            Student s;
            s.id = students.size() + 1;
            cout << "Name: "; cin >> s.name;
            cout << "GPA: "; cin >> s.gpa;
            students.push_back(s);
        } else if(choice == 2) {
            for(auto& st : students) {
                cout << st.id << " | " << st.name << " | GPA: " << st.gpa << endl;
            }
        }
    } while(choice != 4);
    
    return 0;
}
