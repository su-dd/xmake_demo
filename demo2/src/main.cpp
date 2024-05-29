#include <iostream>
#include "TestInf.h"
#include "StaticTest.h"
#include "SharedLinkTest.h"
#include <Windows.h>
using CreateTestFunc = TestInf *(*)();
using DestroyTestFunc = void (*)(TestInf *pTest);
int main(int argc, char **argv)
{
    {
        TestInf *p = new StaticTest();
        p->test();
        delete p; // 注意释放内存
    }

    {
        TestInf *p = new SharedLinkTest();
        p->test();
        delete p; // 注意释放内存
    }

    { // 加载 LibraryShared.dll
        HMODULE hDll = LoadLibraryA("LibraryShared.dll");
        if (hDll != NULL)
        {
            CreateTestFunc createTest = (CreateTestFunc)GetProcAddress(hDll, "createTest");

            TestInf *p = createTest();
            p->test();
            DestroyTestFunc destroyTest = (DestroyTestFunc)GetProcAddress(hDll, "destroyTest");
            destroyTest(p);
            FreeLibrary(hDll);
        }
    }

    return 0;
}
