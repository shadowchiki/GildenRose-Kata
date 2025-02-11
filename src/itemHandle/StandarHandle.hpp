#include <string>
#include <vector>
#include "itemHandle/ItemHandle.hpp"

class StandarHandle : public ItemHandle
{
public:
    StandarHandle();
    virtual ~StandarHandle() = default;
    virtual void handle(Item& item) override;
    virtual void setNext(std::shared_ptr<ItemHandle> next) override;

protected:
    virtual void makeHandle(Item& item) override;
    virtual bool canHandle(Item& item) override;

private:
    std::vector<std::string> m_standarItemName;
};
