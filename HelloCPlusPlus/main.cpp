//
//  main.cpp
//  HelloCPlusPlus
//
//  Created by Jordan Haynes on 10/15/23.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    std::cout << "My name is Jordan\n";
//    return 0;
//}

#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    // Swapping the values
    int temp = a;
    a = b;
    b = temp;
    // Should be 2
    cout << a;
    
    return 0;
}

