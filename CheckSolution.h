#pragma once
class CheckSolution{
public:
	CheckSolution(bool expected, bool actual);
	bool check();
private:
	bool _expected, _actual;
};

