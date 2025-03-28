#include "gmock/gmock.h"
#include "StringCompare.cpp"
TEST(StrCmp, TC1) {
	EXPECT_EQ(StringCompare().CheckLength("ASD", "DSA"), 60);
}
TEST(StrCmp, TC2) {
	EXPECT_EQ(StringCompare().CheckLength("A", "BB"), 0);
}
TEST(StrCmp, TC3) {
	EXPECT_EQ(StringCompare().CheckLength("AA", "AAE"), 30);
}
int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}