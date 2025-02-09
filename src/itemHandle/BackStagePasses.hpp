#pragma once

#include <memory>
#include "ItemHandle.hpp"

class BackStagePasses : public ItemHandle
{
public:
    BackStagePasses(std::shared_ptr<ItemHandle> next);
    virtual ~BackStagePasses() = default;
    virtual void handle(Item& item) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;
};
