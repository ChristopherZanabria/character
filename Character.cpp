// Name: Christopher Zanabria
// Date: 9/4/2023
// Course: CSCI 235
// Instructor: Professor Ligorio
// Description: Character Class Program

#include <iostream>
#include "Character.hpp"

// Default Constructor
Character::Character():
    name_("NAMELESS"), race_(NONE), vitality_(0), armor_(0), level_(0), enemy_(false)
    {

    }

// Parameterized Constructor
Character::Character(const std::string& name, const Race race, int vitality, int armor, int level, bool enemy):
    name_(name), race_(race), vitality_(vitality), armor_(armor), level_(level), enemy_(enemy)
    {
        for (char& c:name_)
        {
            if (std::isalpha(c))
            {
                c = std::toupper(c);
            }
        }

        if (name_.empty())
        {
            name_ = "NAMELESS";
        }
    }

void Character::setName(const std::string& name)
{
    name_ = "";

    for (char c:name)
    {
        if (std::isalpha(c))
        {
            name_ += std::toupper(c);
        }
    }

    if (name_.empty())
    {
        name_ = "NAMELESS";
    }
}

std::string Character::getName() const
{
    return name_;
}

void Character::setRace(const Race race)
{
    race_ = race;
}

Character::Race Character::getRace() const 
{
    return race_;
}

void Character::setVitality(int vitality)
{
    if (vitality >= 0)
    {
        vitality_ = vitality;
    }
}

int Character::getVitality() const 
{
    return vitality_;
}

void Character::setArmor(int armor)
{
    if (armor >= 0) 
    {
        armor_ = armor;
    }
}

int Character::getArmor() const
{
    return armor_;
}

void Character::setLevel(int level)
{
    if (level >= 0)
    {
        level_ = level;
    }
}

int Character::getLevel() const
{
    return level_;
}

void Character::setEnemy()
{
    enemy_ = true;
}

bool Character::isEnemy() const 
{
    return enemy_;
}
