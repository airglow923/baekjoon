#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s, word;
    std::getline(std::cin, s);

    int count = 0;
    
    for (std::stringstream words{s}; words >> word;)
        ++count;

    std::cout << count;
}
