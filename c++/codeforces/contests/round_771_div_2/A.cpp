#include <bits/stdc++.h>

using namespace std;

//bool func(vector<int> vec1 ,vector<int> vec2) {
     //int i = 0;
     //while (i < vec1.size()) {
         //if (vec1[i] < vec2[i]) {
             //return false;
         //}
         //else if (vec1[i] > vec2[i]) {
             //return true;
         //}
         //i++;
     //}
     //return false;
//}

int main()
{
	int t, n, val;
	cin >> t;
	vector<vector<int>> permutations;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		permutations.emplace_back();
		for (int j = 0; j < n; j++)
		{
			cin >> val;
			permutations[i].push_back(val);
			//cout << "val: " << val << endl;
		}
	}

	for (int i = 0; i < permutations.size(); i++)
	{
		int counter = 1;
		int lowest = 0;
		int last_j = 0;
		int j = 0;
		for (j = 0; j < permutations[i].size(); j++)
		{
			if (permutations[i][j] > counter)
			{
				int index = find(permutations[i].begin(), permutations[i].end(), counter) - permutations[i].begin();
				//cout << "index of: " << counter << " " << index << endl;
				
				//if (permutations[i][index] > permutations[i][lowest])
				//{
					lowest = index;
					last_j = j;
					break;
				//}
			}
			counter += 1;
		}
		std::reverse( permutations[i].begin() + last_j, permutations[i].begin() + lowest + 1 );
	}

	for (int i = 0; i < permutations.size(); i++)
	{
		for (int j = 0; j < permutations[i].size(); j++)
		{
			cout << permutations[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
