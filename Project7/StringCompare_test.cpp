#include "gmock/gmock.h"
#include "StringCompare.cpp"
TEST(StrCmp, TC1) {
	EXPECT_EQ(StringCompare().compare("ASD", "DSA"), 100);
}
TEST(StrCmp, TC2) {
	EXPECT_EQ(StringCompare().compare("A", "BB"), 0);
}
TEST(StrCmp, TC3) {
	EXPECT_EQ(StringCompare().compare("AA", "AAE"), 50);
}
TEST(StrCmp, TC4) {
	EXPECT_EQ(StringCompare().compare("AAABB", "BA"), 40);
}
int main(void) {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}