#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    for (char ch = 0; ch < 26; ++ch) {
        auto pos = s.find_first_of(ch + 97);
        if (pos == std::string::npos)
            std::cout << -1 << ' ';
        else
            std::cout << pos << ' ';
    }
}
