#ifndef __STATICTEST_H__
#define __STATICTEST_H__

#include "TestInf.h"

class StaticTest : public TestInf
{
public:
    void test() override;
};
#endif // __STATICTEST_H__