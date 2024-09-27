#include <iostream>

main () {

srand(time(NULL)) ;
int botNum = rand() % 101 ; 

int userINP ;
int tries;

std::cout << "WHAT'S YOU GUESS : " ;
std::cin >> userINP ;

for(int i = 0 ; i<=userINP ; tries++){

if(botNum == userINP){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << userINP << " : YOU GUESSED IT CORRECTLY !" << std::endl ;
    std::cout << "IT TOOK "<<tries+1 << " TRIES TO GUESS THE NUMBER" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    break;
    
}

else {

    if(userINP>botNum){
        std::cout << "TOO HIGH" << std::endl ;
    }

    else if (userINP<botNum){
        std::cout << "TOO LOW!" << std::endl ;
    }


    std::cout << "GUESS AGAIN : " ;
    std::cin >> userINP ;

}
    }

}