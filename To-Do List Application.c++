#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed = false;
};

int main() {
    vector<Task> tasks;
    int choice;
    
    do {
        cout << "\n=== To-Do List ===\n1. Add Task\n2. Show Tasks\n3. Mark Done\n4. Exit\n";
        cin >> choice;
        cin.ignore();
        
        if(choice == 1) {
            Task t;
            cout << "Task: ";
            getline(cin, t.description);
            tasks.push_back(t);
        } else if(choice == 2) {
            for(int i=0; i<tasks.size(); i++) {
                cout << i+1 << ". " << tasks[i].description 
                     << (tasks[i].completed ? " [Done]" : "") << endl;
            }
        }
    } while(choice != 4);
    return 0;
}
