#include <iostream>
#include "OutputSolution.h"

int main(){
	setlocale(LC_ALL, "");

	int example = 0;
	int x;
	bool expected;

	OutputSolution outputSolution;

	example++;
	x = 121;
	expected = true;
	outputSolution.setOutput(example, x, expected);
	outputSolution.print();

	example++;
	x = -121;
	expected = false;
	outputSolution.setOutput(example, x, expected);
	outputSolution.print();

	example++;
	x = 10;
	expected = false;
	outputSolution.setOutput(example, x, expected);
	outputSolution.print();


}
