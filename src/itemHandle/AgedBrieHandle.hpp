#pragma once

#include <memory>
#include "ItemHandle.hpp"

class AgedBrieHandle : public ItemHandle
{
public:
    AgedBrieHandle(std::shared_ptr<ItemHandle> next);
    virtual ~AgedBrieHandle() = default;
    virtual void handle(Item& item) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;
};
