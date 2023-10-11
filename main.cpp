#include <iostream>
using namespace std;
int main(){
   int secret_num=3;
    int guess_num;
    while(secret_num!=guess_num){
        cout << "enter the guess number:";
        cin >> guess_num;
    }
    cout << "you win!!" << endl;
    return 0;
}