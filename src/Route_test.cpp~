#include <CppUTest/CommandLineTestRunner.h>

#include "Route.hpp"

TEST_GROUP(GroupRoute) { };

TEST(GroupRoute, Route_egal_0) { 
    Route r1 {"toto", "tata", 12};
    Route r2 {"toto", "tata", 12};
    CHECK_EQUAL(true, r1==r2);
    CHECK_EQUAL(false, r1!=r2);
}

