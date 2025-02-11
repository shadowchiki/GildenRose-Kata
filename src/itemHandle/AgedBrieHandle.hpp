#pragma once

#include <memory>
#include "ItemHandle.hpp"

class AgedBrieHandle : public ItemHandle
{
public:
    AgedBrieHandle();
    virtual ~AgedBrieHandle() = default;
    virtual void handle(Item& item) override;
    virtual void setNext(std::shared_ptr<ItemHandle> next) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;
};
