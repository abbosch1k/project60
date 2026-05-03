#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Product> inventory;
    int choice;
    
    do {
        cout << "\n=== Inventory System ===\n";
        cout << "1. Add Product\n2. Show Stock\n3. Exit\n";
        cin >> choice;
        
        if(choice == 1) {
            Product p;
            cout << "Name: "; cin >> p.name;
            cout << "Quantity: "; cin >> p.quantity;
            cout << "Price: "; cin >> p.price;
            inventory.push_back(p);
        } else if(choice == 2) {
            for(auto& prod : inventory) {
                cout << prod.name << " | Qty: " << prod.quantity 
                     << " | Price: $" << prod.price << endl;
            }
        }
    } while(choice != 3);
    
    return 0;
}
