#include <iostream>
#include "StaticTest.h"
#include "SharedTest.h"
int main(int argc, char **argv)
{
    std::cout << "hello world!" << std::endl;
    StaticTest::test();

    int a = SharedTest();

    std::cout << "a = " << a << std::endl;
    return 0;
}
