#include "Sulfuras.hpp"

Sulfuras::Sulfuras(std::shared_ptr<ItemHandle> next)
    : ItemHandle(next)
{
}

void Sulfuras::handle(Item& item)
{
    ItemHandle::handle(item);
}

void Sulfuras::makeHandle(Item& item)
{
}

bool Sulfuras::canHandle(Item& item)
{
    return item.name == "Sulfuras, Hand of Ragnaros";
}
