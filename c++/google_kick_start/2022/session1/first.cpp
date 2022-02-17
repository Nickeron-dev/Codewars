#include <iostream>

int main()
{
    int t, n, m, current, total = 0;
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        std::cin >> n;
        std::cin >> m;
        for (int j = 0; j < n; j++)
        {
            std::cin >> current;
            total += current;
        }
        total = total % m;
        printf("Case #%i: %i\n", i, total);
        total = 0;
    }
    return 0;
}
