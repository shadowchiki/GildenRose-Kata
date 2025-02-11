#include "ItemHandleBuilder.hpp"
#include <memory>
#include "StandarHandle.hpp"
#include "itemHandle/AgedBrieHandle.hpp"
#include "itemHandle/BackStagePasses.hpp"
#include "itemHandle/Sulfuras.hpp"

ItemHandleBuilder::ItemHandleBuilder()
    : m_itemHandle(std::make_shared<StandarHandle>())
{
}

std::shared_ptr<ItemHandle> ItemHandleBuilder::build()
{
    return m_itemHandle;
}

ItemHandleBuilder* ItemHandleBuilder::sulfuras()
{
    m_itemHandle->setNext(std::make_shared<Sulfuras>());
    return this;
}

ItemHandleBuilder* ItemHandleBuilder::agedBrie()
{
    m_itemHandle->setNext(std::make_shared<AgedBrieHandle>());
    return this;
}

ItemHandleBuilder* ItemHandleBuilder::backstage()
{
    m_itemHandle->setNext(std::make_shared<BackStagePasses>());
    return this;
}
