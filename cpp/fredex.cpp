#include <algorithm>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::ifstream in(argv[1]);
	int minWeight, cost, weight, bestCost = 0x7FFFFFFF;
	
	in.ignore(8, ' ');
	in >> minWeight;
	
	while(in >> cost >> weight)
		bestCost = std::min(((minWeight / weight) + 1) * cost, bestCost);
	
	std::cout << bestCost << std::endl;
	return 0;
}
