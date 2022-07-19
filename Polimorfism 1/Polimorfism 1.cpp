#include <iostream>
#include <vector>
#include<windows.h>
class Weapon 
{
public:
    virtual void Action1() = 0;
    virtual void Action2() = 0;  
};

class Knife :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "stab the asshole\n";
    }
    virtual void Action2()
    {
        std::cout << "throw a knife\n";
    }
};

class Gatling :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "Aim with a Gatling\n";
    }
    virtual void Action2()
    {
        std::cout << "Riddle the motherfucker\n";
    }
};

class Shotgun :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "Aim with a Shotgun\n";
    }
    virtual void Action2()
    {
        std::cout << "Kiss a motherfucker with a shot\n";
    }
};

class Sniper_rifle :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "Aim with a Sniper_rifle\n";
    }
    virtual void Action2()
    {
        std::cout << "fire a Sniper_rifle\n";
    }
};

class grenade :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "Throw a grenade\n";
    }
    virtual void Action2()
    {
        std::cout << "detonate a grenade\n";
    }
};

class Rocket_launcher :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "Aim with a Rocket_launcher\n";
    }
    virtual void Action2()
    {
        std::cout << "fire a Rocket_launcher\n";
    }
};

class Blaster :public Weapon
{
public:
    virtual void Action1()
    {
        std::cout << "Aim with a RBlaster\n";
    }
    virtual void Action2()
    {
        std::cout << "fire a Blaster\n";
    }
};

int main()
{
    std::vector<Weapon*> vec;
    vec.push_back(new Knife);
    vec.push_back(new Gatling);
    vec.push_back(new Shotgun);
    vec.push_back(new Sniper_rifle);
    vec.push_back(new grenade);
    vec.push_back(new Rocket_launcher);
    vec.push_back(new Blaster);
    int i = -1;
    do 
    {
       
            
            if (GetKeyState('0') < 0)
            {
                std::cout << "We are using knife\n";
                i = 0;
                Sleep(200);
            }
            else if (GetKeyState('1') < 0)
            {
                std::cout << "We are using gatling\n";
                i = 1;
                Sleep(200);
            }
            else if (GetKeyState('2') < 0)
            {
                std::cout << "We are using Shotgun\n";
                i = 2;
                Sleep(200);
            }
            else if (GetKeyState('3') < 0)
            {
                std::cout << "We are using Sniper_rifle\n";
                i = 3;
                Sleep(200);
            }
            else if (GetKeyState('4') < 0)
            {
                std::cout << "We are using grenade\n";
                i = 4;
                Sleep(200);
            }
            else if (GetKeyState('5') < 0)
            {
                std::cout << "We are using Rocket_launcher\n";
                i = 5;
                Sleep(200);
            }
            else if (GetKeyState('6') < 0)
            {
                std::cout << "We are using Blaster\n";
                i = 6;
                Sleep(200);
            }
            else if (GetKeyState(VK_SPACE) < 0)
            {
                if (i < 0)std::cout << "We don't have weapon\n";
                else vec[i]->Action1();
                Sleep(200);
            }
            else if (GetKeyState(VK_RETURN) < 0)
            {
                if (i < 0)std::cout << "We don't have weapon\n";
                else vec[i]->Action2();
                Sleep(200);
            }
            else if (GetKeyState(VK_ESCAPE) < 0)
            {
                break;
            }
           
        }
        
     while (true);
}

