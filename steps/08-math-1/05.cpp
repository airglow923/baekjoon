#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, v;
    std::cin >> a >> b >> v;

    int v_a = v - a;
    int a_b = a - b;
    int days = v_a / a_b;

    std::cout << (v_a % a_b == 0 ? days + 1 : days + 2);
}
