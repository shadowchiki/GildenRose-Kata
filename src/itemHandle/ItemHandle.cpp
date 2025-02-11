#include "ItemHandle.hpp"

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

void ItemHandle::setNext(std::shared_ptr<ItemHandle> next)
{
    if (!m_next)
    {
        m_next->setNext(next);
    }
    else
    {
        m_next = next;
    }
}
