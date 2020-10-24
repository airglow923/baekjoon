#include <iostream>
#include <string>

static int translate_alpha(char ch)
{
    switch (ch) {
        case 'A':
        case 'B':
        case 'C': return 2;
        case 'D':
        case 'E':
        case 'F': return 3;
        case 'G':
        case 'H':
        case 'I': return 4;
        case 'J':
        case 'K':
        case 'L': return 5;
        case 'M':
        case 'N':
        case 'O': return 6;
        case 'P':
        case 'Q':
        case 'R':
        case 'S': return 7;
        case 'T':
        case 'U':
        case 'V': return 8;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z': return 9;
    }
}

inline static int translate_time(int n)
{
    return 2 + (n - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    int time = 0;
    for (const auto& ch : s)
        time += translate_time(translate_alpha(ch));

    std::cout << time;
}
