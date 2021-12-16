#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin ("coins.in");
ofstream fout ("coins.out");

int main()
{
        int s, n;
        fin >> s >> n;
	vector<int> coins;
	for (int i = 0; i < n; i++)
	{
		int value;
		fin >> value;
		coins.push_back(value);
		cout << value << endl;
	}

	int answer = 0;
	for (int i = 0; i < coins.size(); i++)
	{
		for(int j = 1; j < coins.size(); j++)
		{
			if (coins[i] + coins[j] == s)
			{
				answer++;
			}
		}
	}
	
	fout << answer;
        fin.close();
        fout.close();
        return 0;
}
