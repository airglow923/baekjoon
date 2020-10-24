#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string s;
    std::getline(std::cin, s);

    int sum = 0;
    for (const auto& ch : s)
        sum += std::stoi(std::string(1, ch));

    std::cout << sum;
}
