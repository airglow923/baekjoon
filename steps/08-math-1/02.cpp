#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    bool solved = false;
    int i = n / 5;
    int j = 0;

    for (; i >= 0; --i) {
        int tmp = n - 5 * i;
        for (; j * 3 <= tmp; ++j) {
            if (j * 3 == tmp) {
                solved = true;
                break;
            }
        }
        if (solved)
            break;
    }
    
    std::cout << (solved ? i + j : -1);
}
