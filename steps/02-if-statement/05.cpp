#include <iostream>

int main()
{
    int h, m;
    std::cin >> h >> m;
    if (m < 45) {
        if (h == 0)
            h = 23;
        else
            --h;
        m = m - 45 + 60;
    } else {
        m -= 45;
    }
    
    std::cout << h << " " << m;
}
