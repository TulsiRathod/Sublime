#include <iostream> 
using namespace std; 
int main() 
{ 
    const int MAX = 11; 
    char decor[MAX][MAX]; 
 
    for (int i = 0; i < MAX/2; i+=2) { 
        for (int j = i; j < MAX; ++j) { 
            decor[i][j] = '-'; 
            decor[j][i] = '-'; 
            decor[MAX - i - 1][j] = '-'; 
            decor[j][MAX - i - 1] = '-'; 
        } 
    } 
 
    for (int i = 1; i < MAX/2+1; i+=2) { 
        for (int j = i;j < MAX-i;j++) { 
            decor[i][j] = '*'; 
            decor[j][i] = '*'; 
            decor[MAX - i - 1][j] = '*'; 
            decor[j][MAX - i - 1] = '*';
            } 
} 
for (int i = 0; i < MAX; ++i) { 
for (int j = 0; j < MAX; ++j) { 
cout << decor[i][j]<<" "; 
} 
cout << endl; 
} 
}