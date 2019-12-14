#include <stdbool.h>
#include <unity_fixture.h>
#include "rules.h"

TEST_GROUP(Rules);

TEST_SETUP(Rules) {}

TEST_TEAR_DOWN(Rules) {}

TEST(Rules, live_cell_with_fewer_than_two_neighbors_dies)
{
    TEST_ASSERT_FALSE(cell_alive(true, 0))
    TEST_ASSERT_FALSE(cell_alive(true, 1))
}

TEST(Rules, live_cell_with_two_or_three_neighbors_lives)
{
    TEST_ASSERT_TRUE(cell_alive(true, 2))
    TEST_ASSERT_TRUE(cell_alive(true, 3))
}

TEST(Rules, live_cell_with_four_or_more_neighbors_dies)
{
    TEST_ASSERT_FALSE(cell_alive(true, 4))
    TEST_ASSERT_FALSE(cell_alive(true, 5))
    TEST_ASSERT_FALSE(cell_alive(true, 6))
    TEST_ASSERT_FALSE(cell_alive(true, 7))
    TEST_ASSERT_FALSE(cell_alive(true, 8))
}

TEST(Rules, dead_cell_with_three_neighbors_lives)
{
    TEST_ASSERT_TRUE(cell_alive(false, 3))
}

TEST(Rules, dead_cell_with_non_three_neighbors_dies)
{
    TEST_ASSERT_FALSE(cell_alive(false, 0))
    TEST_ASSERT_FALSE(cell_alive(false, 1))
    TEST_ASSERT_FALSE(cell_alive(false, 2))
    TEST_ASSERT_FALSE(cell_alive(false, 4))
    TEST_ASSERT_FALSE(cell_alive(false, 5))
    TEST_ASSERT_FALSE(cell_alive(false, 6))
    TEST_ASSERT_FALSE(cell_alive(false, 7))
    TEST_ASSERT_FALSE(cell_alive(false, 8))
}

TEST_GROUP_RUNNER(Rules)
{
    RUN_TEST_CASE(Rules, live_cell_with_fewer_than_two_neighbors_dies)
    RUN_TEST_CASE(Rules, live_cell_with_two_or_three_neighbors_lives)
    RUN_TEST_CASE(Rules, live_cell_with_four_or_more_neighbors_dies)
    RUN_TEST_CASE(Rules, dead_cell_with_three_neighbors_lives)
    RUN_TEST_CASE(Rules, dead_cell_with_non_three_neighbors_dies)
}