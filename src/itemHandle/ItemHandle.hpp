#pragma once

#include <memory>
#include "GildedRose.h"

class ItemHandle
{
public:
    ItemHandle() = default;
    virtual ~ItemHandle() = default;
    virtual void handle(Item& item);
    virtual void setNext(shared_ptr<ItemHandle> next);

protected:
    virtual void makeHandle(Item& item) = 0;
    virtual bool canHandle(Item& item) = 0;

    std::shared_ptr<ItemHandle> m_next;
};
