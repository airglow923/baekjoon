#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

namespace {

    inline const char* CA1 = "c=";
    inline const char* CA2 = "c-";
    inline const char* CA3 = "dz=";
    inline const char* CA4 = "d-";
    inline const char* CA5 = "lj";
    inline const char* CA6 = "nj";
    inline const char* CA7 = "s=";
    inline const char* CA8 = "z=";

    const std::vector<const char*> CAs{CA1, CA2, CA3, CA4, CA5, CA6, CA7, CA8};

}

template<typename Iter>
std::size_t is_croatian(Iter beg, Iter end)
{
    for (const auto& ca : CAs) {
        auto beg_copy = beg;
        bool match = true;

        if (std::distance(beg, end) < std::strlen(ca))
            break;

        for (auto iter = ca; *iter; ++iter, ++beg_copy) {
            if (*iter != *beg_copy) {
                match = false;
                break;
            }
        }
        if (match)
            return std::strlen(ca);
    }

    return 0;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    int count = 0;

    for (auto beg = s.begin(); beg != s.end(); ++count) {
        auto res = is_croatian(beg, beg + 3);
        if (res)
            beg += res;
        else
            ++beg;
    }

    std::cout << count;
}

