#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, int> out1;
	for (int i = 0; i < n; i++)
	{
		int v;
		cin >> v;
		if (out1.count(v) == 0)
		{
			out1.insert(make_pair(v, 1));
		}
		else
		{
			out1[v] += 1;
		}
	}
	
	map<int, int> out2;
	for (int i = 0; i < n - 1; i++)
	{
		int v;
		cin >> v;
		if (out2.count(v) == 0)
		{
			out2.insert(make_pair(v, 1));
		}
		else
		{
			out2[v] += 1;
		}
	}
	
	map<int, int> out3;
	for (int i = 0; i < n - 2; i++)
	{
		int v;
		cin >> v;
		if (out3.count(v) == 0)
		{
			out3.insert(make_pair(v, 1));
		}
		else
		{
			out3[v] += 1;
		}
	}
	
	auto f = out1.begin();
	auto s = out2.begin();
	while (f->first == s->first && f->second == s->second)
	{
		f++;
		s++;
	}
	cout << f->first << '\n';
	
	auto s2 = out2.begin();
	auto t = out3.begin();
	while (s2->first == t->first && s2->second == t->second)
	{
		s2++;
		t++;
	}
	cout << s2->first << '\n';
	return 0;
}
