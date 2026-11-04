#include <iostream>
using namespace std;

int* readScores(int count){
    int* values = new int[count];
    for (int i = 0; i < count; i++){
        cin >> values[i];
    }

    return values;
} //values is destroyed here; the array is not.

int main(){
    int count = 0;
    cout<<"Number of scores: ";
    if(!(cin >> count) || count <= 0){
        cout <<"Enter a positive whole nummber.\n";
        return 1;
    }

    cout << "Enter the scores: ";
    int* scores = readScores(count);

    //readScores has returned but its arrray is still here.
    for(int i = 0; i < count; ++i){
        cout << "Saved score: " << scores[i] << '\n';
    }

    delete[] scores; //array is destroyed here
    scores = nullptr;
    return 0;
} //scores is destroyed here.