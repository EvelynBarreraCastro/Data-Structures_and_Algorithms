// 

#include <iostream>
#include <unistd.h>
using namespace std; 


int main() {
    int countdown = 10; 
    
    while (countdown > 0) {  
        cout << countdown << "..." << endl;  
        countdown--;  
        sleep(1); // Pauses for 1 second 
    }
    
    std::cout << "Liftoff! 🚀" << endl;
    return 0;
}
