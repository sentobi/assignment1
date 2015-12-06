#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
private:
    const int kAttackDmg;

public:
    Weapon(const std::string& name, const int& durability, const int& dmg);
    virtual ~Weapon();
    const int getAttackDmg();
    virtual void receiveDamage(const int& damage);
};

#endif