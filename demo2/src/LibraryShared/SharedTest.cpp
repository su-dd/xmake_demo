#include "SharedTest.h"
#include <iostream>

// 测试代码
void SharedTest::test()
{
    std::cout << "this is SharedTest !" << std::endl;
}

TestInf *createTest()
{
    return new SharedTest();
}

void destroyTest(TestInf *pTest)
{
    delete pTest;
}
