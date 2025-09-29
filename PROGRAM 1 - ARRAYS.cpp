// Program using array Operations
#include <iostream>
using namespace std;
int main() {
    int a[6] = {1, 2, 3, 4, 5},i; 
    a[5] = 6; // Insert at end
    
    for (i = 2; i < 5; i++) 
    a[i] = a[i + 1]; // Delete index 2
    
    for (i = 0; i < 5; i++) 
    if (a[i] == 4) 
     cout << "Found\n"; // Search
}
