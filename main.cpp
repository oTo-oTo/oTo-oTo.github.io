#include <iostream>
#include "anotherfile.cpp"

int main(int argc, char** argv) {
    int a = 4 ;
    int b = 5 ;
    int c = 6 ;

    std::cout << a + b << std::endl ;
    std::cout << "Hello world!" << std::endl ;
    print(c) ;
    return 0 ;
}