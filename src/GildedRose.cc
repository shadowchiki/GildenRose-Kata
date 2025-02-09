#include "GildedRose.h"
#include <memory>
#include "itemHandle/AgedBrieHandle.hpp"
#include "itemHandle/BackStagePasses.hpp"
#include "itemHandle/ItemHandle.hpp"
#include "itemHandle/StandarHandle.hpp"
#include "itemHandle/Sulfuras.hpp"

GildedRose::GildedRose(vector<Item>& items)
    : items(items)
{
}

void GildedRose::updateQuality()
{
    std::shared_ptr<ItemHandle> sulfurasHandle = std::make_shared<Sulfuras>(nullptr);
    std::shared_ptr<ItemHandle> ageBrieHandle = std::make_shared<AgedBrieHandle>(sulfurasHandle);
    std::shared_ptr<ItemHandle> backStagePassHandle =
        std::make_shared<BackStagePasses>(ageBrieHandle);
    StandarHandle handle(backStagePassHandle);

    for (int i = 0; i < items.size(); i++)
    {
        handle.handle(items[i]);
    }
}
