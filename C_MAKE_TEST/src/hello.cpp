#include "hello.h"

void HELLO::say_hello() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << "111" << std::endl;
    std::cout << "222" << std::endl;
    std::cout << "333!" << std::endl;
}

int main() {

    HELLO my_hello;
    my_hello.say_hello();

    system("pause");
    return 0;
}

