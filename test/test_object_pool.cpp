#include "memory/object_pool.h"

#include "gtest/gtest.h"

class TestObjectPool : public ::testing::Test
{
}; // class TestObjectPool

struct TestStruct
{
    int id;
    std::string hash;
}; // struct TestStruct

TEST_F(TestObjectPool, test_ctor_noarg)
{
    memory::ObjectPool<TestStruct> pool;
    ASSERT_TRUE(pool.capacity(), 1000);
}