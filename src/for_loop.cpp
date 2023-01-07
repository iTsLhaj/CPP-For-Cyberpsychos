#include <iostream> // std::cout, std::endl ...
#include <vector> // std::vector

// For Loops
void Init(std::vector<int> m_Player_Inventory)
{
    // Loop that executes a specific number of times
    // "i" is loop variable
    for ( int i = 0; i < m_Player_Inventory.size(); i++ )
    {
        // Print element i
        std::cout << m_Player_Inventory[i] << std::endl;
    }

    // Ranged-based For Loop (C++11)
    for ( auto Element : m_Player_Inventory )
    {
        // Print Element
        std::cout << Element << std::endl;
    }
}
