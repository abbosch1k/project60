#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cout << "=== Console Chess Master ===\n";
    cout << "Simplified chess board (full version needs more code)\n";
    // Basic board display
    char board[8][8] = {
        {'R','N','B','Q','K','B','N','R'},
        {'P','P','P','P','P','P','P','P'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'p','p','p','p','p','p','p','p'},
        {'r','n','b','q','k','b','n','r'}
    };
    
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Project ready. Expand with move logic.\n";
    return 0;
}
