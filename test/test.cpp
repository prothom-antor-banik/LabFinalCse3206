#include <gtest/gtest.h>
#include "../src/Student.h"

using namespace std;

class testFix : public testing::Test {
public:
    Student* s;

    void SetUp() {
        cout << "SETUP" << endl;
        s = Student::getInstance();
    }

    void TearDown() {
        s->~Student();
        cout << "TEARDOWN" << endl;
    }
};

TEST_F(testFix, Add) {
    EXPECT_EQ(s->add("antor"), "antor");
    EXPECT_NE(s->add("banik"), "onurag");
    EXPECT_EQ(s->add("prothom"), "prothom");
    EXPECT_NE(s->add("onurag"), "prothom");
}

TEST_F(testFix, Remove) {
    s->add("antor");
    s->add("banik");
    s->add("prothom");
    EXPECT_EQ(s->remove("prothom"), "prothom");
    EXPECT_EQ(s->remove("antor"), "antor");
    EXPECT_NE(s->remove("prothom"), "prothom");
    EXPECT_EQ(s->remove("prothom"), "NONE");
}

int main(){
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
