/*Задание 3
Ввести задолженность D (1..1000). Через do-while принимать платежи,
пока долг не станет равен нулю. Каждый платёж должен быть целым от 1 до текущего долга;
неподходящие суммы отклонять и просить повторить ввод. После каждого принятого платежа
выводить остаток долга; в конце — число платежей и их общую сумму.*/
#include <iostream>
using namespace std;

bool check(double pay) {
		return (pay - int(pay) > 0);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int D, num = 0, pay_all = 0;
	cin >> D;
	do {
		double pay;
		cin >> pay;
		if (pay < 1 || check (pay) || pay > D) {
			cout << "\nrepeat\n";
			continue;
		}
		pay_all += int(pay);
		D -= int(pay);
		cout << D << endl;
		num++;
	} while (D > 0);
	cout << num << endl << pay_all;
	return 0;
}