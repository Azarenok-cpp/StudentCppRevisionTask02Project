﻿#include "tasks.h"

/*	Task 03. The Number of tens [число десятков]
*
*	Дано целое число N, определите число десятков в нем (предпоследнюю цифру числа).
*	Если предпоследней цифры нет, то можно считать, что число десятков равно нулю.
*
*	Формат входных данных [input]
*	На вход дается любое целое число N в диапазоне С++ типа int.
*
*	Формат выходных данных [output]
*	Выведите одно целое число - ответ на задачу.
*
*	[sample function input 1]: 456
*	[sample function output 1]: 5
*
*	[ input 2]: -1234567
*	[output 2]: 6
*
*	[ input 3]: 1000
*	[output 3]: 0
*
*	[ input 4]: 9
*	[output 4]: 0
*/

int task03(int number) {
	number = abs(number);
	number /= 10;
	return number % 10;
	//O(1)
}