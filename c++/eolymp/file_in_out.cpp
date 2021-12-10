#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("input.in");
ofstream fout ("output.out");

int main()
{
	int a, b;
	fin >> a >> b;
	fout << (a + b) << endl;
	fin.close();
	fout.close();
	return 0;
}

