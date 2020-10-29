#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::vector<int> nums(15 * 14);

    for (int i = 1; i <= 14; ++i) {
        nums[i - 1] = i;
        nums[i * 14] = 1;
    }

    for (int i = 1; i <= 14; ++i) {
        int pos = i * 14;
        int prv = pos - 14;

        nums[pos + 1] = nums[prv + 1] + 1;
        for (int j = 2; j < 14; ++j)
            nums[pos + j] = nums[pos + j - 1] + nums[prv + j];
    }

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int k, n;
        std::cin >> k >> n;
        std::cout << nums[k * 14 + (n - 1)] << '\n';
    }
}
