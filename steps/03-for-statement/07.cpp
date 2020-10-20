#include <iostream>

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, a, b;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << (a + b) << '\n';
    }
}
