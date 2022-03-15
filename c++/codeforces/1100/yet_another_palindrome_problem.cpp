#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

void solution(void)
{
	int n;
	cin >> n;
	vector<int> vec;
	map<int, int> buf;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		vec.push_back(val);
		if (buf.count(val) != 0)
		{
			buf[val] += 1;
		}
		else
		{
			buf.insert(make_pair(val, 1));
		}
	}
	
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = vec.size() - 1; j >= 0; j--)
		{
			if (vec[j] == vec[i])
			{
				if (j - i >= 2)
				{
					cout << "YES\n";
					return;
				}
			}
		}
	}
	
	cout << "NO\n";
	
	
	
	//for (auto i = buf.begin(); i != buf.end(); i++)
	//{
		////cout << i->first << " " << i->second << '\n';
		//if (i->second >= 3)
		//{
			//cout << "YES\n";
			//is_done = true;
			//break;
		//}
		//if (i->second == 2)
		//{
			//for (int j = 0; j < vec.size(); j++)
			//{
				//if (vec[j] == i->first)
				//{
					//if (j + 1 < vec.size() && vec[j + 1] != i->first)
					//{
						//cout << "YES\n";
						//is_done = true;
						//break;
					//}
					//else
					//{
						//cout << "NO\n";
						//is_done = true;
						//break;
					//}
				//}
			//}
			//if (is_done)
			//{
				//break;
			//}
		//}
	//}
	
	//for (int i = 0; i < vec.size(); i++)
	//{
		
		//int j = i;
		//int i_c = i;
		//int i_up = i + 1;
		//int counter = 0;
		//int counter_two = 0;
		//while ((j >= 0 && i_c < vec.size() && buf[j] == vec[i_c]) || (i_up < vec.size() && vec[i_up] == vec[j]))
		//{
			////out << "here" << j << " " << i_up << "\n";
			//if (vec[i_up] == vec[j])
			//{
				//counter_two += 2;
			//}
			//if (buf[j] == vec[i_c])
			//{
				//if (j == i_c)
				//{
					//counter++;
				//}
				//else
				//{
					//counter += 2;
				//}
			//}
			//j--;
			//i_c++;
			//i_up++;
		//}
		//if (counter >= 3 || counter_two >= 3)
		//{
			//cout << "YES\n";
			//is_done = true;
			//break;
		//}
	//}

	
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		solution();
	}
	return 0;
}



bool is_prime(int number)
{
	if (number <= 1)
	{
		return false;
	}

	for (int i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int gcd(int a, int b)
{
	if (b == 0)
	{
		return abs(a);
	}
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
