#include <iostream>

using namespace std;

struct Hero
{
    string name;
    int health = 0;
    int armor = 0;

    Hero(string name, int health, int armor)
    {
        this->name = name;
        this->health = health;
        this->armor = armor;
    }

    void print_info()
    {
        cout << "Health: " << health << endl;
        cout << "Armor: " << armor << endl;
    }
};

struct Warrior : public Hero
{
    using Hero::Hero;
    void hello()
    {
        cout << "Hi, I'm strong warrior, my name is: " << name << endl;
        print_info();
    }
};

struct Magican : public Hero
{
    using Hero::Hero;
    void hello()
    {
        cout << "Hi,I'm brave magican, my name is: " << name << endl;
        print_info();
    }
};

int main()
{
    Warrior w("bo", 21, 32);
    w.hello();
    Magican m("Voldemort", 12, 32);
    m.hello();
}