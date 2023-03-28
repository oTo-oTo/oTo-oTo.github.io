#include <iostream>

int min(int a, int b) { return (a < b) ? a : b ; }

int main(int argc, char** argv) {
    int a = 0 ;
    int b = 5 ;

    int c = min(a, b) ;

    std::cout << a + b << std::endl ;
    std::cout << "Hello world!" << std::endl ;
    return 0 ;
}