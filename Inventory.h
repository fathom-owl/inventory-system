// Inventory.h
#pragma once

#include <vector>
#include "Item.h"

class Inventory {
public:
    void addItem(const Item& item);
    std::vector<Item> getItems() const;

private:
    std::vector<Item> items;
};
