#pragma once

#include <memory>
#include "ItemHandle.hpp"

class Sulfuras : public ItemHandle
{
public:
    Sulfuras(std::shared_ptr<ItemHandle> next);
    virtual ~Sulfuras() = default;
    virtual void handle(Item& item) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;
};
