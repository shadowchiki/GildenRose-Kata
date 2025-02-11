#pragma once

#include <memory>
#include "ItemHandle.hpp"

class BackStagePasses : public ItemHandle
{
public:
    BackStagePasses() = default;
    virtual ~BackStagePasses() = default;
    virtual void handle(Item& item) override;
    virtual void setNext(std::shared_ptr<ItemHandle> next) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;
};
