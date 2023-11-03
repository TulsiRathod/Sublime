#include <iostream> 
using namespace std; 
const size_t MAX_LENGTH = 100; 
int orders[MAX_LENGTH]; 
size_t cnt = 0; 
void placeOrder() { 
int order; 
cout << "Enter order no : "; 
cin >> order; 
orders[cnt] = order; 
cnt++; 
cout << "Your order is placed. Order Number : " << order << endl; 
} 
void pendingOrders() { 
int filledElements = 0;
 int arraySize = sizeof(orders) / sizeof(orders[0]); 
    for (size_t i = 0; i < arraySize; i++) { 
        if (orders[i] != 0) { 
            filledElements++; 
        } 
    } 
    cout << "Pending orders :\n"; 
    for (size_t i = 0;i < filledElements;i++) { 
        cout << orders[i] << endl; 
    } 
    cout << "\nTotal " << filledElements << " orders pending." << endl; 
} 
 
void serveOrder() { 
    pendingOrders(); 
    int filledElements = 0; 
    int arraySize = sizeof(orders) / sizeof(orders[0]); 
    for (size_t i = 0; i < arraySize; i++) { 
        if (orders[i] != 0) { 
            filledElements++; 
        } 
    } 
    int order; 
    cout << "Pick order : "; 
    cin >> order; 
    for (size_t i = 0;i < filledElements;i++) { 
        if (orders[i] == order) { 
            for (size_t j = i+1;j < filledElements;j++) { 
                orders[j - 1] = orders[j]; 
            } 
            orders[filledElements - 1] = '\0'; 
            break; 
        } 
    } 
    cout << "Order " << order << " has been served.\n"; 
    cnt--; 
} 
 
int main() 
{    /**/ 
    int choice; 
    while (true) 
    { 
        cout <<endl<< "1. Place order\n2. Pending orders\n3. Serve order\n4. Exit the app\nEnter your choice : "; 
        cin >> choice; 
        switch (choice) 
        { 
        case 1: 
            placeOrder(); 
            break; 
        case 2: 
            pendingOrders(); 
            break; 
        case 3: 
            serveOrder(); 
            break; 
        case 4: 
            return 0; 
        default: 
            cout << "Invalid choice entered."<<endl; 
            break; 
        } 
    }
}