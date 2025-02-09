#include <memory>
#include <string>
#include <vector>
#include "itemHandle/ItemHandle.hpp"

class StandarHandle : public ItemHandle
{
public:
    StandarHandle(std::shared_ptr<ItemHandle> next);
    virtual ~StandarHandle() = default;
    virtual void handle(Item& item) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;

private:
    std::vector<std::string> m_standarItemName;
};
