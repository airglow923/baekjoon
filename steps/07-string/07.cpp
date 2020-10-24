#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <algorithm>

std::string reverse(const std::string& s)
{
    std::string copy{s};

    for (auto i = copy.size() - 1; i > copy.size() / 2; --i)
        std::swap(copy[copy.size() - i - 1], copy[i]);

    return copy;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s, num1, num2;
    std::getline(std::cin, s);

    std::stringstream words{s};
    words >> num1;
    words >> num2;

    std::cout << std::max(std::stoi(reverse(num1)), std::stoi(reverse(num2)));
}
