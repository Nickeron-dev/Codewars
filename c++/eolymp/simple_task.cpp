#include <iostream>

int main()
{
	int input;
        std::cin >> input;
        std::string answer = std::to_string(input);
	int size = answer.size();
        for (int i = 1; i < size; i++)
        {
                char following_symbol = answer[i];
                answer[i] = ' ';
                answer += following_symbol;
        }
	std::cout << answer << std::endl;

	return 0;
}

