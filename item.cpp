#include "item.h"

#include <iostream>

Item::Item(std::string name, int value, int saleValue) : m_name(name), m_value(value), m_saleValue(saleValue){}

void Item::printItem()
{
    std::cout << "Name: " << getName() << ", Verkaufswert: " << getSaleValue() << std::endl;
}

std::string Item::getName() const
{
    return m_name;
}

void Item::setName(const std::string &newName)
{
    m_name = newName;
}

int Item::getValue() const
{
    return m_value;
}

void Item::setValue(int newValue)
{
    m_value = newValue;
}

int Item::getSaleValue() const
{
    return m_saleValue;
}

void Item::setSaleValue(int newSaleValue)
{
    m_saleValue = newSaleValue;
}


