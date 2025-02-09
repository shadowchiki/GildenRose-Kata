#pragma once

#include <memory>
#include "GildedRose.h"

class ItemHandle
{
public:
    explicit ItemHandle(std::shared_ptr<ItemHandle> next);
    virtual ~ItemHandle() = default;
    virtual void handle(Item& item);

protected:
    virtual void makeHandle(Item& item) = 0;
    virtual bool canHandle(Item& item) = 0;

    std::shared_ptr<ItemHandle> m_next;
};
