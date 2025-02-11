#pragma once

#include <memory>
#include "ItemHandle.hpp"

class Sulfuras : public ItemHandle
{
public:
    Sulfuras() = default;
    virtual ~Sulfuras() = default;
    virtual void handle(Item& item) override;
    virtual void setNext(std::shared_ptr<ItemHandle> next) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;
};
