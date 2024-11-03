#include <iostream>
#include <random>
#include <cmath>
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(1,50);
    int random_number = distr(eng);

int guess_count = 15;
int guess;

int main(){
    while(guess_count !=0){
        std::cout << "Welcome to a number guessing game ! You have 15 guesses to get the right number between 1-50!" << '\n';

        std:: cin >> guess;
        // Checking if the answer is correct or not.
        if(guess == random_number){
            std:: cout << "Congratulations! You've guessed it" << '\n';
            break;}
        else {
            std:: cout << "Wrong! Try Again!" << '\n';
            guess_count--;
        }
        // In this case, I am making a hint by finding the difference between the guess and the random number
        int hint = std::abs(guess - random_number);
        // Here, I am giving a cue to the user whether they are close or not, by how much and displaying how many guesses are left
        if(hint < 20){
            std::cout << "You're getting cold. about more than 20 off. Yikes!" << '\n';
            std:: cout << "Guess count: " << guess_count;
        } 
        else if(hint > 20 && hint < 0){
            std:: cout << "You're getting really close! Within arms reach!" << '\n';
            std:: cout << "Guess count: " << guess_count;
        }
        if(hint > 10 && hint < 0){
            std:: cout << "You're so close!" << '\n';
            std::cout << "Guess count: " << guess_count;
        }

        if(guess_count == 0){
            std:: cout << "Game over! The number you tried to guess was " << random_number << '\n';
            break;
        }
        
    }
}