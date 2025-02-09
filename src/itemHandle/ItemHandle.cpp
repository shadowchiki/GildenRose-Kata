#include "ItemHandle.hpp"
#include <memory>

ItemHandle::ItemHandle(std::shared_ptr<ItemHandle> next)
    : m_next(next)
{
}

void ItemHandle::handle(Item& item)
{
    if (canHandle(item))
    {
        makeHandle(item);
    }
    else if (m_next)
    {
        m_next->handle(item);
    }
}
