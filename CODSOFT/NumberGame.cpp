//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main() {
//    
//    srand( time(nullptr));
//
//    int num =  rand() % 100 + 1;
//    int guess;
//
//     cout << "\t\t\tWelcome to the Number Guessing Game!" <<  endl;
//     cout << "\nTry to guess the number between 1 and 100." <<  endl;
//
//
//    do {
//         cout << "\nEnter your guess: ";
//         cin >> guess;
//
//        if (guess < num) {
//            cout << "Too low! Try again." << endl<<endl;
//        }
//        else if (guess > num) {
//             cout << "Too high! Try again." << endl<< endl;
//        }
//        else {
//             cout << "\n\nCongratulations! You guessed the correct number: " << num <<  endl;
//        }
//    } while (guess != num);
//
//    return 0;
//}
