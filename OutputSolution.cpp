#include "OutputSolution.h"
#include "Solution.h"
#include "CheckSolution.h"
#include <iostream>

using namespace std;

void OutputSolution::setOutput(int example, int x, bool expected){
	_example = example;
	_x = x;
	_expected = expected;
}

void OutputSolution::setActual() {
	Solution solution;
	_actual = solution.isPalindrome(_x);
}

void OutputSolution::printCheck() {
	CheckSolution check(_expected, _actual);
	(check.check()) ? cout << "Результат: верный" << endl : cout << "Результат: неверный" << endl;
}

void OutputSolution::print(){
	
	cout << "============ Тест " << _example << " ============" << endl;
	cout << "Входные данные: x = " << _x << endl;
	cout << "Ожидаемый результат: " << (_expected ? "true" : "false") << endl;
	setActual();
	cout << "Фактический результат: " << (_actual ? "true" : "false") << endl;
	cout << "============ Проверка ==============" << endl;
	printCheck();
	cout << "====================================\n" << endl;

}
