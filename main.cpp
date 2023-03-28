#include <iostream>
#include "anotherfile.cpp"

int mult(int a, int b) {
    return a * b ;
}

int sum(int a, int b) {
    return a + b ;
}

int main(int argc, char** argv) {
    int a = 4 ;
    int b = 5 ;
    int c = 6 ;

    std::cout << "a * b = " << mult(a, b) << std::endl ;
    std::cout << "a + b = " << sum(a, b) << std::endl ;
    std::cout << "Hello world!" << std::endl ;
    print(c) ;
    return 0 ;
}