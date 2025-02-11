#include "GildedRose.h"
#include <memory>
#include "itemHandle/ItemHandle.hpp"
#include "itemHandle/ItemHandleBuilder.hpp"

GildedRose::GildedRose(vector<Item>& items)
    : items(items)
{
}

void GildedRose::updateQuality()
{
    ItemHandleBuilder builder;
    std::shared_ptr<ItemHandle> handle = builder.agedBrie()->backstage()->sulfuras()->build();

    for (int i = 0; i < items.size(); i++)
    {
        handle->handle(items[i]);
    }
}
