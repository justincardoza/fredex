#include <stdio.h>

int main(int argc, char *argv[])
{
	int minWeight, cost, weight, bestCost = 0x7FFFFFFF;
	FILE *in = fopen(argv[1], "r");
	
	fscanf(in, "Unload: %d\n", &minWeight);
	
	while(fscanf(in, "%d %d\n", &cost, &weight) > 0)
		bestCost = (((minWeight / weight) + 1) * cost < bestCost) ? ((minWeight / weight) + 1) * cost : bestCost;
	
	printf("%d\n", bestCost);
	return 0;
}
