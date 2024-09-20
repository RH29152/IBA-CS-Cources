#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{

    srand(time(0));

    int generated_num = (rand() % 900) + 100;
    std::cout << generated_num << std::endl;
    
    int user_guess;
    
    std::cout << "Enter a three digit number: ";
    std::cin >> user_guess;
    
    // Extract digits from the lottery and user numbers
    // first digit
    int lotteryDigit1 = generated_num / 100;
    // second digit
    int lotteryDigit2 = (generated_num / 10) % 10;
    // third digit
    int lotteryDigit3 = generated_num % 10;
	
	// first digit
    int userDigit1 = user_guess / 100;
    // second digit
    int userDigit2 = (user_guess / 10) % 10;
    // third digit
    int userDigit3 = user_guess % 10;
    
    if(generated_num == user_guess) {
    	std::cout << "You won 1 million rupees" << std::endl;
	}else if ((userDigit1 == lotteryDigit1 || userDigit1 == lotteryDigit2 || userDigit1 == lotteryDigit3) &&
               (userDigit2 == lotteryDigit1 || userDigit2 == lotteryDigit2 || userDigit2 == lotteryDigit3) &&
               (userDigit3 == lotteryDigit1 || userDigit3 == lotteryDigit2 || userDigit3 == lotteryDigit3)) {
        std::cout << "You won 5 lac rupees!" << std::endl;
    } else if (userDigit1 == lotteryDigit1 || userDigit1 == lotteryDigit2 || userDigit1 == lotteryDigit3 ||
               userDigit2 == lotteryDigit1 || userDigit2 == lotteryDigit2 || userDigit2 == lotteryDigit3 ||
               userDigit3 == lotteryDigit1 || userDigit3 == lotteryDigit2 || userDigit3 == lotteryDigit3) {
        std::cout << "You won 1 lac rupees!" << std::endl;
    } else {
        std::cout << "Sorry, you didn't win anything. Better luck next time!" << std::endl;
    }
    
    
    return 0;
}
