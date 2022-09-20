#include <iostream>
#include <string>

using namespace std;

struct AB
{
	int* i;

	void AA(int* abc)
	{
		if(i == abc)
			cout << "AA" << endl;
	}

	void BB(int*& abc)
	{
		if(i == abc)
			cout << "BB" << endl;
	}
};

int main()
{
	int* a = new int(10);
	AB ab;
	ab.i = a;

	ab.AA(a);

	ab.BB(a);

	char c = '5';
	cout << (int)c << endl;

	cout << "하하호호히히" << endl;
}