#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>

class Character 
{   
    // Public Member Functions
    public:
        enum Race {NONE, HUMAN, ELF, DWARF, LIZARD, UNDEAD};
        Character();
        Character(const std::string& name, const Race race, int vitality = 0, int armor = 0, int level = 0, bool isEnemy = false);  

        void setName(const std::string& name);
        std::string getName() const;
        void setRace(const Race race);
        Race getRace() const;
        void setVitality(int vitality);
        int getVitality() const;
        void setArmor(int armor);
        int getArmor() const;
        void setLevel(int level);
        int getLevel() const;
        void setEnemy();
        bool isEnemy() const;   

    // Private Data Members
    private:
        std::string name_;
        Race race_;
        int vitality_;
        int armor_;
        int level_;
        bool enemy_;   
};

#endif 