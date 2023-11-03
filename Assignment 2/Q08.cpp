#include <iostream> 
using namespace std; 
char BOOKED = 'X'; 
char AVAILABLE = '*'; 
bool seats[16][20] = { false }; 
const size_t ROWS = 16; 
const size_t COLS = 20; 
char row_start = 'A'; 
void display() { 
    cout << endl; 
    for (int i = 0;i < ROWS;i++) { 
        for (int j = 0;j < COLS;j++) { 
            if (seats[i][j]) { 
                cout << BOOKED << " "; 
            } 
            else { 
                cout << AVAILABLE << " "; 
            } 
        } 
        cout << " --> "<< (char)(row_start+i) << endl; 
    } 
    cout << endl << "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv  Screen this way.\n"; 
} 
 
void buyTicket(char row,int col) { 
    int rowIndex = row - row_start; 
    if (seats[rowIndex][col-1]) { 
        cout << "\nAlready booked. Try another seat.\n"; 
    } 
    else { 
        seats[rowIndex][col-1] = true; 
        display(); 
    } 
} 
 
void cancelTicket(char row, int col) { 
    int rowIndex = row - row_start; 
    if (!seats[rowIndex][col-1]) { 
        cout << "\nAlready available. Try another seat.\n"; 
    } 
    else { 
        seats[rowIndex][col-1] = false; 
        display(); 
    } 
} 
 
int main() 
{ 
    char rowInput; 
    int colInput; 
    display(); 
    while (true) 
    { 
        int choice; 
        cout << "\n1. Buy a ticket\n2. Cancel ticket\n3. Exit the app\nEnter your choice \n"; 
        cin >> choice; 
        switch (choice) 
        { 
        case 1: 
            cout << "Enter seat no\n"; 
            cin >> rowInput >> colInput; 
            buyTicket(rowInput,colInput); 
            break; 
        case 2: 
            cout << "Enter seat no\n"; 
            cin >> rowInput >> colInput; 
            cancelTicket(rowInput,colInput); 
            break; 
        case 3: 
            cout << "\nExiting the app..."; 
            return 0; 
        default: 
            cout << "\nInvalid choice entered!!\n"; 
            break; 
        } 
    } 
}