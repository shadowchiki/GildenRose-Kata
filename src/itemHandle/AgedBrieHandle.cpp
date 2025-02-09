#include "AgedBrieHandle.hpp"

AgedBrieHandle::AgedBrieHandle(std::shared_ptr<ItemHandle> next)
    : ItemHandle(next)
{
}

void AgedBrieHandle::handle(Item& item)
{
    ItemHandle::handle(item);
}

void AgedBrieHandle::makeHandle(Item& item)
{
    if (item.quality < 50)
    {
        item.quality = item.quality + 1;
    }

    item.sellIn = item.sellIn - 1;

    if (item.sellIn < 0 && item.quality < 50)
    {
        item.quality = item.quality + 1;
    }
}

bool AgedBrieHandle::canHandle(Item& item)
{
    return item.name == "Aged Brie";
}
