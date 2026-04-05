#include<gtest/gtest.h>
#include "formatter.h"
#include <string>
#include <vector>

TEST(FmtCore, FormatString1) {
    std::string result = FmtCore::format("Hello, %s!", "World");
    EXPECT_EQ("Hello, World!", result);
}

TEST(FmtCore, FormatString2) {
    std::string result = FmtCore::format("%s %d", std::string("Test"), 2);
    EXPECT_EQ("Test 2", result);
}

TEST(FmtCore, Split) {
    std::string input = "apple banana cherry";
    std::vector<std::string> parts = FmtCore::split(input, " ");
    EXPECT_EQ(3u, parts.size());// size_t literal
    EXPECT_EQ("apple", parts[0]);
    EXPECT_EQ("banana", parts[1]);
    EXPECT_EQ("cherry", parts[2]);
}

TEST(FmtCore,Splitjoin){
    std::string input = "apple banana cherry";
    std::string joined = FmtCore::join(",", FmtCore::split(input));
    EXPECT_EQ("apple,banana,cherry", joined);
}

TEST(FmtCore,Splitreplace){
    std::string input = "apple banana cherry";
    std::string replaced = FmtCore::replace(input, "apple", "pineapple");
    EXPECT_EQ("pineapple banana cherry", replaced);
}

TEST(FmtTable, SetValue) {
    FmtTable table({"A", "B"}, 1, {"%d", "%d"});
    table.set_value(0, 0, 1);
    table.set_value(0, 1, 2);
    std::string result = table.str();
    EXPECT_TRUE(result.find("1") != std::string::npos);
    EXPECT_TRUE(result.find("2") != std::string::npos);
}

TEST(FmtTable, Str) {
    FmtTable table({"A", "B"}, 1, {"%d", "%d"});
    table.set_value(0, 0, 1);
    table.set_value(0, 1, 2);
    std::string expected = "-----\n A B \n-----\n 1 2 \n-----\n";
    EXPECT_EQ(expected, table.str());
}

TEST(FmtTable, OperatorShift) {// test operator<< for std::vector
    FmtTable table({"Name", "Age"}, 2, {"%s", "%d"});
    table << std::vector<std::string>{"Alice", "Bob"};
    table << std::vector<int>{30,25};
    std::string expected = "-----------\n Name  Age \n-----------\n Alice  30 \n   Bob  25 \n-----------\n";
    EXPECT_EQ(expected, table.str());
}

TEST(FmtTable, RelaxColWidth) {
    FmtTable table({"Col"}, 2, {"%s"});
    std::vector<std::string> col = {"Short", "Long"};
    std::vector<std::string> relaxed = table.relax_col_width(col, "Title");
    EXPECT_EQ(3u, relaxed.size()); // title + 2 rows
    EXPECT_EQ("Title", relaxed[0]);
    EXPECT_EQ("Short", relaxed[1]); 
    EXPECT_EQ(" Long", relaxed[2]);
}

TEST(FmtTable, EmptyTitles) {
    FmtTable table({}, 1, {"%d"});
    table.set_value(0, 0, 18);
    std::string result = table.str();
    EXPECT_TRUE(result.find("18") != std::string::npos);
}