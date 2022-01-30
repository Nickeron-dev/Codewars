#include <iostream>


bool is_prime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
        for (int p = 1; p <= 100; p++)
        {
                bool is_prm = is_prime(p);
                if (is_prm)
                {
                        // std::cout << "p: " << p << '\n';
                        for (int g = 1; g <= 10000; g++)
                        {
                                if (is_prime(g))
                                {
                                        double value_p = (double) p / (p + 1);
                                        double value_g = (double) (g + 1) / g;
                                        // std::cout << "val: " << value_p;
                                        // std::cout << "valull: " << value_g;
                                        double sum = value_p + value_g;
                                        for (int n = 1; n <= 10000; n++)
                                        {
                                                double value_n = (double) (2 * n) / (n + 2);
                                                if (value_n == sum)
                                                {
                                                        std::cout << "p: " << p << " g: " << g << " n: " << n << "\n";
                                                }
                                        }
                                }
                        }
                }
        }
}
