#include <iostream>

int main(){
    int count = 0;
    std::cout << "Number of scores: ";
    if(!(std::cin >> count ) || count <= 0){
        std::cout <<"Enter a positive whole number. \n";
        return 1;
    }
    //'new int[count]' creates an array of 'count' integers and gives back a pointer to its first element
    int* scores = new int[count];
    double total = 0;
    std::cout <<"Enter the scores: ";
    for(int i = 0; i < count; i++){
        std::cin >> scores[i];
        total += scores[i];
    }

    double average = total/count;
    std::cout <<"Average: " << average << '\n';
    for(int i = 0; i < count; i++){
        std::cout << scores[i] << ": " << scores[i] - average << " from average\n";
    }

    delete[] scores;
    scores = nullptr;
    return 0;
}