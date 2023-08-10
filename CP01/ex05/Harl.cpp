#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}


void Harl::debug()
{
    std::cout <<  "I love having extra bacon for";
    std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup burger.";
    std::cout << " I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put";
    std::cout << "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)   
{
    const char *lvls[4] = {"debug", "info", "warning", "error"};

    void (Harl::*flvls[4])() = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    for (int x = 0; x < 4; x++)
    {
        if (!level.compare(lvls[x]))
            (this->*flvls[x])();
    }
}