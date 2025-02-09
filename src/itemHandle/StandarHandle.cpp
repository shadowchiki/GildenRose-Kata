#include "StandarHandle.hpp"
#include <algorithm>
#include <memory>

StandarHandle::StandarHandle(std::shared_ptr<ItemHandle> next)
    : ItemHandle(next)
    , m_standarItemName()
{
    m_standarItemName.push_back({"Elixir of the Mongoose"});
    m_standarItemName.push_back({"+5 Dexterity Vest"});
    m_standarItemName.push_back({"Conjured Mana Cake"});
}

void StandarHandle::handle(Item& item)
{
    ItemHandle::handle(item);
}

void StandarHandle::makeHandle(Item& item)
{
    if (item.quality > 0)
    {
        item.quality = item.quality - 1;
    }

    item.sellIn = item.sellIn - 1;

    if (item.sellIn < 0)
    {
        if (item.quality > 0)
        {
            item.quality = item.quality - 1;
        }
    }
}

bool StandarHandle::canHandle(Item& item)
{
    auto itemFinded = std::find(m_standarItemName.begin(), m_standarItemName.end(), item.name);
    return itemFinded != m_standarItemName.end();
}
