#include <iostream>
#include <string>

enum class Monster
{
    M_OGRE,
    M_DRAGON,
    M_SLIME,
};

struct monster
{
    Monster type;
    std::string name;
    int health;
};

void print_monster(monster m)
{
    std::string type_string{""};
    switch (m.type)
    {
    case Monster::M_OGRE:
        type_string = "Ogre";
        break;
    case Monster::M_DRAGON:
        type_string = "Dragon";
        break;
    case Monster::M_SLIME:
        type_string = "Slime";
        break;
    default:
        type_string = "Unknown";
        break;
    }
    std::cout << type_string << '\n';
    std::cout << m.name << '\n';
    std::cout << m.health << '\n';
}

int main()
{
    monster dragon{Monster::M_DRAGON, "dragon_name", 100};
    monster slime{Monster::M_SLIME, "slime_name", 90};
    monster ogre{Monster::M_OGRE, "ogre_name", 80};

    print_monster(dragon);
    print_monster(slime);
    print_monster(ogre);

    return 0;
}