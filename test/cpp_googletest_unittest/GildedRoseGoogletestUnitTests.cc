#include <gtest/gtest.h>
#include "GildedRose.h"

TEST(GildedRoseTest, Foo)
{
    vector<Item> items;
    items.push_back({"+5 Dexterity Vest", 10, 20});
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("+5 Dexterity Vest", app.items[0].name);
    EXPECT_EQ(app.items[0].quality, 19);
    EXPECT_EQ(app.items[0].sellIn, 9);
}
