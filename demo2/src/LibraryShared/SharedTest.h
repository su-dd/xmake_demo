#ifndef __SHAREDTEST_H__
#define __SHAREDTEST_H__
#include "TestInf.h"
#include "Library_api.h"
class SharedTest : public TestInf
{
public:
    void test() override;
};

extern "C" LIBRARY_API TestInf *createTest();
extern "C" LIBRARY_API void destroyTest(TestInf *pTest);

#endif // __SHAREDTEST_H__