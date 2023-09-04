#include "Character.hpp"

int main()
{
    Character player("PlayerName", Character::DWARF, 20, 10, 2, false);
    
    std::cout << "Character Name: " << player.getName() << std::endl;
    std::cout << "Character Race: " << player.getRace() << std::endl;
    std::cout << "Character Vitality: " << player.getVitality() << std::endl;
    std::cout << "Character Armor: " << player.getArmor() << std::endl;
    std::cout << "Character Level: " << player.getLevel() << std::endl;

    player.setEnemy();

    if (player.isEnemy())
    {
        std::cout << "The character is an enemy." << std::endl;
    }
    else
    {
        std::cout << "The character isn't an enemy." << std::endl;
    }

    return 0;
}
