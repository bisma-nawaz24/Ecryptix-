//#include<iostream>
//using namespace std;
//
//void add() {
//	int time;
//	double sum = 0.0;
//	cout << "Glad to see you in the section of addition!!!!!" << endl;
//	cout << "How many times you want to add the numbers?" << endl;
//	cin >> time;
//	cout << "Okay. I got you.Enter the numbers" << endl;
//	double* nums = new double[time];
//
//	for (int i = 0; i < time; i++) {
//		cin >> *(nums + i);
//	}
//	for (int i = 0; i < time; i++) {
//		sum = sum + (*nums + i);
//	}
//	cout << "Here is your answer" << " " << sum << endl;
//
//}
//
//void sub() {
//	int time;
//	double sub = 0.0;
//	cout << "Glad to see you in the section of Subtraction!!!!!" << endl;
//	cout << "How many times you want to subtract the numbers?" << endl;
//	cin >> time;
//	cout << "Okay. I got you.Enter the numbers" << endl;
//	double* nums = new double[time];
//
//	for (int i = 0; i < time; i++) {
//		cin >> *(nums + i);
//	}
//	for (int i = 0; i < time; i++) {
//		sub = (*nums + i) - sub;
//	}
//	cout << "Here is your answer" << " " << sub << endl;
//
//}
//
//void mul() {
//	int time;
//	double mul = 1.1;
//	cout << "Glad to see you in the section of multiplication!!!!!" << endl;
//	cout << "How many times you want to multiply the numbers?" << endl;
//	cin >> time;
//	cout << "Okay. I got you.Enter the numbers" << endl;
//	double* nums = new double[time];
//
//	for (int i = 0; i < time; i++) {
//		cin >> *(nums + i);
//	}
//	for (int i = 0; i < time; i++) {
//		mul = mul + (*nums + i);
//	}
//	cout << "Here is your answer" << " " << mul << endl;
//
//}
//void div() {
//	int time;
//	double div = 0.0;
//	cout << "Glad to see you in the section of Division!!!!!" << endl;
//	cout << "How many times you want to divide the numbers?" << endl;
//	cin >> time;
//	cout << "Okay. I got you.Enter the numbers" << endl;
//	double* nums = new double[time];
//
//	for (int i = 0; i < time; i++) {
//		cin >> *(nums + i);
//		if (*(nums + i) == 0) {
//			cout << "I'm afraid to mention that you enter zero which will lead to error. TRY to enter number other than zero.THANK YOU" << endl;
//			cin >> *(nums + i);
//		}
//	}
//	div = nums[0];
//
//	// Perform sequential division
//	for (int i = 1; i < time; i++) {
//		div /= nums[i];  // Divide by each subsequent number
//	}
//	cout << "Here is your answer" << " " << div << endl;
//
//}
//
//void fac() {
//
//}
//
//void power() {
//
//}
//
//int main() {
//	int choice;
//	cout << "Press 1 for addition " << endl;
//	cout << "Press 2 for subtraction " << endl;
//	cout << "Press 3 for multiplication " << endl;
//	cout << "Press 4 for Division " << endl;
//	cout << "Press 5 for Factorial " << endl;
//	cout << "Press 6 for power " << endl;
//	cin >> choice;
//	cout << "---------------------------------------------------------------------------" << endl;
//	switch (choice) {
//	case 1:
//		add();
//		break;
//	case 2:
//		sub();
//		break;
//	case 3:
//		mul();
//		break;
//	case 4:
//		div();
//		break;
//	case 5:
//		fac();
//		break;
//	case 6:
//		power();
//		break;
//	default:
//		cout << "Invalid choice entered" << endl;
//		break;
//
//	}
//
//
//
//	system("pause");
//	return 0;
//}