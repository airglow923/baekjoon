#include <cctype>
#include <iostream>
#include <string>
#include <map>

std::string str_toupper(const std::string& s)
{
    std::string copy{s};
    for (auto& ch : copy)
        ch = std::toupper(ch);
    return copy;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    std::string capitals{str_toupper(s)};
    std::map<char, int> character_count;

    for (const auto& ch : capitals)
        ++character_count[ch];

    char most;
    int max = 0;

    for (const auto& [key, value] : character_count) {
        if (max < value) {
            max = value;
            most = key;
        }
    }

    for (int count = 0; const auto& [key, value] : character_count) {
        if (value == max)
            ++count;
        if (count > 1) {
            std::cout << '?';
            return 0;
        }
    }

    std::cout << most;
}
