#include "ctest.h"
#include <lib/body.h>

CTEST(1, checkbrack_true)
{
    char* input = "circle(1 1,3)";
    ASSERT_TRUE(brackCheck(input));
}
CTEST(1, checkspace_true)
{
    char* input = "circle(1 1,3)";
    ASSERT_TRUE(spaceCommCheck(input));
}

CTEST(1, checkcommat_true)
{
    char* input = "circle(1 1,3)";
    char circle[7] = "circle";
    ASSERT_TRUE(comCheck(circle, input));
}

CTEST(1, checkbrack_false)
{
    char* input = "circle(1 1,3";
    ASSERT_FALSE(brackCheck(input));
}

CTEST(1, checkbrack_false2)
{
    char* input = "circle1 1,3)";
    ASSERT_FALSE(brackCheck(input));
}

CTEST(1, checkspacecom_false)
{
    char* input = "circle (1 1,3)";
    ASSERT_FALSE(spaceCommCheck(input));
}

CTEST(1, checkspacecom_false2)
{
    char* input = "circle(1 1 ,3)";
    ASSERT_FALSE(spaceCommCheck(input));
}

CTEST(1, checkspacecom_false3)
{
    char* input = "circle(1 1, 3)";
    ASSERT_FALSE(spaceCommCheck(input));
}

CTEST(1, checkspacecom_false4)
{
    char* input = "circle(1 1,3 )";
    ASSERT_FALSE(spaceCommCheck(input));
}
CTEST(1, checkcommat_false)
{
    char* input = "cirle(1 1,3)";
    char circle[7] = "circle";
    ASSERT_FALSE(comCheck(circle, input));
}
CTEST(1, checkcommat_false2)
{
    char* input = "cercle(1 1,3)";
    char circle[7] = "circle";
    ASSERT_FALSE(comCheck(circle, input));
}
CTEST(1, checkcommat_false3)
{
    char* input = "circl(1 1,3)";
    char circle[7] = "circle";
    ASSERT_FALSE(comCheck(circle, input));
}
CTEST(1, checkcommat_false4)
{
    char* input = "sheeesh(1 1,3)";
    char circle[7] = "circle";
    ASSERT_FALSE(comCheck(circle, input));
}
