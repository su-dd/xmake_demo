#ifndef __SHAREDLINKTEST_H__
#define __SHAREDLINKTEST_H__

#include "Library_api.h"
#include "TestInf.h"

class LIBRARY_API SharedLinkTest : public TestInf
{
public:
    void test() override;
};

#endif // __SHAREDLINKTEST_H__