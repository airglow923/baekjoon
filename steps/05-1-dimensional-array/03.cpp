#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> v(10);
    int a, b, c;
    std::cin >> a >> b >> c;

    std::string s{std::to_string(a * b * c)};

    for (const auto& ch : s) {
        switch (ch) {
            case '0': ++v[0]; break;
            case '1': ++v[1]; break;
            case '2': ++v[2]; break;
            case '3': ++v[3]; break;
            case '4': ++v[4]; break;
            case '5': ++v[5]; break;
            case '6': ++v[6]; break;
            case '7': ++v[7]; break;
            case '8': ++v[8]; break;
            case '9': ++v[9]; break;
        }
    }

    for (const auto& elem : v)
        std::cout << elem << '\n';
}
