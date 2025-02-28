#include "CheckSolution.h"

CheckSolution::CheckSolution(bool expected, bool actual) : _expected(expected), _actual(actual) {}

bool CheckSolution::check(){
	return _expected == _actual;
}
