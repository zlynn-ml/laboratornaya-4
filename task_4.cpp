/*Задание 4
Ввести r (2..8) тарифов и c (2..10) вариантов расхода. Вложенными циклами
построить таблицу платы: для тарифа i стоимость первых пяти единиц равна 2·i за единицу,
а каждой следующей — 3·i. В столбце j расход равен j единицам.
Для каждой строки дополнительно вывести сумму всех c рассчитанных платежей.*/


#include <iostream>
using namespace std;
void probel (int sum) {
	if (sum < 100000)
		cout << " ";
	if (sum < 10000)
		cout << " ";
	if (sum < 1000)
		cout << " ";
	if (sum < 100)
		cout << " ";
	if (sum < 10)
		cout << " ";
}

int main() {
	int r, c;
	cin >> r;
	cin >> c;
	if (r > 8 || r < 2 || c < 2 || c > 10)
		return -1;
	for (int i = 1; i <= r; i++) {
		int sum_all = 0;
			for (int j = 1; j <= c; j++) {
				int sum = 0;
				if (j > 5) {
					sum += (3 * (j - 5) + 2 * 5) * i;
					probel(sum);
					cout << sum;
					sum_all += sum;
					continue;
				}
				sum += j * i * 2;
				sum_all += sum;
				probel(sum);
				cout << sum;
			}

		cout << "     " << sum_all << endl;
	}
}