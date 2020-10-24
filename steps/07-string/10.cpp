#include <iostream>
#include <limits>
#include <string>
#include <map>

bool is_group_word(const std::string& s)
{
    std::map<char, bool> log;
    char prv = s[0];
    log[prv] = true;

    for (auto beg = s.begin() + 1; beg != s.end(); ++beg) {
        if (*beg != prv) {
            if (log[*beg])
                return false;
            else
                log[*beg] = true;
        }

        prv = *beg;
    }

    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, count = 0;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < n; ++i) {
        std::string s;
        std::getline(std::cin, s);

        if (is_group_word(s))
            ++count;
    }

    std::cout << count;
}
