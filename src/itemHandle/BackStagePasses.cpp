#include "BackStagePasses.hpp"

void BackStagePasses::handle(Item& item)
{
    ItemHandle::handle(item);
}

void BackStagePasses::setNext(std::shared_ptr<ItemHandle> next)
{
    ItemHandle::setNext(next);
}

void BackStagePasses::makeHandle(Item& item)
{
    if (item.quality < 50)
    {
        item.quality = item.quality + 1;

        if (item.sellIn < 11)
        {
            if (item.quality < 50)
            {
                item.quality = item.quality + 1;
            }
        }
        if (item.sellIn < 6)
        {
            if (item.quality < 50)
            {
                item.quality = item.quality + 1;
            }
        }
    }
    item.sellIn = item.sellIn - 1;
    if (item.sellIn < 0)
    {
        item.quality = item.quality - item.quality;
    }
}

bool BackStagePasses::canHandle(Item& item)
{
    return item.name == "Backstage passes to a TAFKAL80ETC concert";
}
