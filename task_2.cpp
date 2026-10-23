/*Задание 2
Вводить через while целые значения суточного расхода до -1.
Допустимы значения 0..100, остальные игнорировать. Найти максимальную 
длину строго возрастающей последовательности подряд идущих корректных
значений. Например, для 3, 5, 5, 7, 9 ответ равен 3 (серия 5, 7, 9).
Если нет ни одного корректного значения — ответ 0.
*/
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int ras = 0;
	int posled = 0;
	int ent = 0;
	int ras_ = -1;
	while (true) {
		cin >> ras;
		if (ras == -1)
			break;
		if (ras < 0 || ras > 100) {
			posled = 0;
			ras_ = -1;
			continue;
		}
		if (ras > ras_) {
			posled++;
			if (ent < posled)
				ent = posled;
		}
		else {
			posled = 1;
		}
		ras_ = ras;
	}
	cout << ent;
}