// minmax_element
#include <iostream> // std::cout
#include <algorithm> // std::generate
#include <vector> // std::vector
#include <ctime> // std::time
#include <numeric> // std::accumulate
using namespace std;

bool myfn(int i, int j) { return (i < j); }


int RandomNumber() { return (std::rand() % 100); }

void print(vector<int> a)
{
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int main()
{
	srand(unsigned(time(0)));

	int n;
	cout << "n = ? "; cin >> n;
	vector<int> v(n);

	generate(v.begin(), v.end(), RandomNumber);
	

	vector<int> u(v.size());
	auto p = copy_if(v.begin(), v.end(), u.begin(), [](int i) {return i; });
	u.resize(p - u.begin());
	print(u);

	auto min = *std::min_element(u.begin(), u.end(), myfn);
	cout << "Min = " << min << endl;

	auto max = *std::max_element(u.begin(), u.end(), myfn);
	cout << "Max = " << max << endl;
	
	return 0;
}