#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, sum = 0;
    std::cin >> n;

    char ch;
    for (int i = 0; i < n; ++i) {
        std::cin >> ch;
        sum += std::stoi(std::string(1, ch));
    }

    std::cout << sum;
}
