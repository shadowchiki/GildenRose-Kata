#include <memory>
#include "itemHandle/ItemHandle.hpp"
class ItemHandleBuilder
{
public:
    ItemHandleBuilder();
    virtual ~ItemHandleBuilder() = default;
    virtual std::shared_ptr<ItemHandle> build();
    virtual ItemHandleBuilder* sulfuras();
    virtual ItemHandleBuilder* agedBrie();
    virtual ItemHandleBuilder* backstage();

private:
    std::shared_ptr<ItemHandle> m_itemHandle;
};
