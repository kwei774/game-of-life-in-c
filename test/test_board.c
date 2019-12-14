#include <stdbool.h>
#include <unity_fixture.h>
#include "board.h"

TEST_GROUP(Board);

TEST_SETUP(Board) {}

TEST_TEAR_DOWN(Board) {}

TEST(Board, test_class_works)
{
    TEST_ASSERT_FALSE(get_state())
}

TEST_GROUP_RUNNER(Board)
{
    RUN_TEST_CASE(Board, test_class_works)
}