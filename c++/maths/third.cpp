#include <iostream>

int main()
{
        for (int i = 10; i <= 100; i++)
        {
                double sum = 0;
                for (int j = 1; j <= i; j++)
                {
                        sum += (double) 1 / (2 * j);
                        if (sum == 1.0)
                        {
                                std::cout << "here\n";
                                break;
                        }
                }
                if (sum == 1){
                        double sum_1 = 0;
                        for (int j = 1; j <= i; j++)
                        {
                                sum_1 += (double) j / (3 * j);
                                if (sum_1 == 1.0)
                                {
                                        break;
                                }
                        }
                        if (sum_1 == 1.0)
                        {
                                std::cout << " YES\n";
                        }
                }
        }
        return 0;
}
