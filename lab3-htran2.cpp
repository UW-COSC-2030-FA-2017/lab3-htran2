//Huy Tran - htran2
#include <iostream>
using namespace std;

void sumShort() {
	bool STOP = false;
	short n = 1;
	short sum = 0;
	short tmp = 0;
	cout << "\t\tn\t\tsum(short)" << endl;
	while (!STOP) {
		tmp = sum;
		sum += n;
		if (n > 250) {
			cout << "\t\t" << n << "\t\t" << sum << endl;
		}
		if (sum < 0) {
			cout << "The last number that works is " << n - 1 << endl;
			cout << "The last sum that works is " << tmp << endl;
			cout << "The value of short that causes an overflow is " << n << endl;
			cout << "The sum is " << sum << endl;
			STOP = true;
		}
		else {
			n++;
		}
	}
}

void sumLong() {
	bool STOP = false;
	long i = 1;
	long sumLong = 0;
	long temp = 0;
	cout << "\n\n\n";
	cout << "\t\tn\t\tsum(long)" << endl;
	while (!STOP) {
		temp = sumLong;
		sumLong += i;
		if (i > 65530) {
			cout << "\t\t" << i << "\t\t" << sumLong << endl;
		}
		if (sumLong < 0) {
			cout << "The last number that works is " << i - 1 << endl;
			cout << "The last sum that works is " << temp << endl;
			cout << "The value of long that causes an overflow is " << i << endl;
			cout << "The value of sum is " << sumLong << endl;
			STOP = true;
		}
		else {
			i++;
		}
	}
}

void productFloat() {
	bool STOP = false;
	long nL = 1;
	float product = 1;
	float tem = 1;
	cout << "\n\n\n";
	cout << "\t\tn\t\tproduct(float)" << endl;
	while (!STOP) {
		tem = product;
		product *= nL;
		if (nL >30) {
			cout << "\t\t" << nL << "\t\t" << product << endl;
		}
		if (product == INFINITY) {
			cout << "The last number that works is " << nL - 1 << endl;
			cout << "The last product that works is " << tem << endl;
			cout << "The value of n that causes an overflow is " << nL << endl;
			cout << "The value of product is " << product << endl;
			STOP = true;
		}
		else {
			nL++;
		}
	}
}

void productDouble() {
	bool STOP = false;
	long n = 1;
	double product = 1;
	double tmp = 1;
	cout << "\n\n\n";
	cout << "\t\tn\t\tproduct(long)" << endl;
	while (!STOP) {
		tmp = product;
		product *= n;
		if (n >165) {
			cout << "\t\t" << n << "\t\t" << product << endl;
		}
		if (product == INFINITY) {
			cout << "The last number that works is " << n - 1 << endl;
			cout << "The last product that works is " << tmp << endl;
			cout << "The value of n that causes an overflow is " << n << endl;
			cout << "The value of product is " << product << endl;
			STOP = true;
		}
		else {
			n++;
		}
	}
}

void f() {
	bool STOP = false;
	float sum = 0;
	cout << "\t\tn\t\tsum(float)" << endl;
	for (int n = 1; n < 15; n++) {
		sum = 0;
		float add = 1.0 / n;
		for (int i = 1; i <= n; i++) {
			sum += add;
		}
		sum = sum - 1.0;
		cout << "\t\t" << n << "\t\t" << sum  << endl;
	}

	cout << "The expected value should be 0.\nThe result is not accurate from n=10.\n";
	cout << "Since 1/n will lose accuracy as n gets longer, the result will be more likely to be different than 0 as n gets longer." << endl;
}

void fDouble() {
	bool STOP = false;
	double sum = 0;
	cout << "\t\tn\t\tsum(double)" << endl;
	for (int n = 1; n < 15; n++) {
		sum = 0;
		double add = 1.0 / n;
		for (int i = 1; i <= n; i++) {
			sum += add;
		}
		sum = sum - 1.0;
		cout << "\t\t" << n << "\t\t" << sum << endl;
	}
	cout << "The expected value should be 0.\nThe result is not accurate from n=6.\n";
	cout << "Since 1/n will lose accuracy as n gets longer, the result will be more likely to be different than 0 as n gets longer." << endl;
}
int main() {
	sumShort();
	cout << endl;

	sumLong();
	cout << endl;

	productFloat();
	cout << endl;

	productDouble();
	cout << endl;

	f();
	/*The expected value should be 0.The result is not accurate from n=10.
	Since 1/n will lose accuracy as n gets longer, the result will be more likely to be different than 0 as n gets longer.*/
	cout << endl;


	fDouble();
	cout << endl;
	/*The expected value should be 0.The result is not accurate from n=6.
	Since 1/n will lose accuracy as n gets longer, the result will be more likely to be different than 0 as n gets longer.*/

	cout << "Part 7 float:" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << "The code prints out 4.4 although 4.4 doesn't satisfy the condition i < 4.4." << endl;
	cout << "Explaination: float has low accuracy.\n\n\n";

	/*The code prints out 4.4 although 4.4 doesn't satisfy the condition i < 4.4.
	Explaination: float has low accuracy.*/

	cout << "Part 8 double:" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << "The code doesn't prints out 4.4 as part 7." << endl;
	cout << "Explaination: double has more accuracy than float.\n\n\n";
	/*The code doesn't prints out 4.4 as part 7.
	Explaination: double has more accuracy than float.*/


	return 0;

}