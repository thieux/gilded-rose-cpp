#include "gmock/gmock.h"
#include "GildedRose.h"
#include <vector>

TEST(Canary, Equality) {
    ASSERT_EQ(1, 1);
}

TEST(GildedRoseTest, Foo) {
    std::vector<Item> items;
    items.push_back(Item("Foo", 0, 0));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("fixme", app.items[0].name);
}
