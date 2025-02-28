#pragma once
class OutputSolution{
public:
	OutputSolution() = default;
	void setOutput(int example, int x, bool expected);

	void print();
private:
	int _example, _x;
	bool _expected, _actual;

	void setActual();
	void printCheck();
};

