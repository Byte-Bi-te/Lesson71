#include <iostream>
using namespace std;

int main()
{

	int guests, cups, spoons, saucers;
	guests = cups = spoons = saucers = 6;
	int total = guests + cups + spoons + saucers;
	std::cout << "Total:" << total << "items" << endl;
	return 0;
}