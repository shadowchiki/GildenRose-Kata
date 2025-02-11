#include "Sulfuras.hpp"

void Sulfuras::handle(Item& item)
{
    ItemHandle::handle(item);
}

void Sulfuras::setNext(std::shared_ptr<ItemHandle> next)
{
    ItemHandle::setNext(next);
}

void Sulfuras::makeHandle(Item& item)
{
}

bool Sulfuras::canHandle(Item& item)
{
    return item.name == "Sulfuras, Hand of Ragnaros";
}
