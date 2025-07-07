//#include<iostream>   
//#include <cstdlib>  // For rand and srand
//#include <ctime>    // For time()
//using namespace std;
//
//void random_guess() {
//
//	srand(time(0));    // To Prevent repeatation of the random numbers
//	int secretNumber = rand() % 100 + 1;  //Generate numbers between 1-100
//	cout << secretNumber << endl;
//	int num = secretNumber / 2;
//
//	int guess;
//	cout << "Enter the number" << endl;
//	cin >> guess;
//	while (guess != secretNumber) {  //While loop will continue until the user guess the number
//
//		if (guess < secretNumber && guess>num) {
//			cout << "You are about to guess it right.";
//			cout << "Keeping trying" << endl;
//			cin >> guess;
//		}
//		else if (guess > secretNumber) {
//			cout << "Guess too high." << endl;
//			cout << "Guess again" << endl;
//			cin >> guess;
//		}
//		else if (guess < secretNumber) {
//			cout << "Guess too low." << endl;
//			cout << "Guess again" << endl;
//			cin >> guess;
//		}
//		
//		
//	}
//	cout << "Yayyyyy. You guess it right." << endl;
//}
//int main() {
//	random_guess();          //function call
//	system("pause");
//	return 0;
//}