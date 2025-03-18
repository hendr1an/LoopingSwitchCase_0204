#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;
    int perulanganWhile = 0;
    int perulanganDoWhile = 0;

    //perulangan while
    cout << "perulangan dengan while" << endl;
    srand(time(0));
    x = rand() % 10;
    cout << "NIlai Awal x = " << x << endl;
    while(x < 7){
        cout << "NIlai x = " << x << "lari keliling lapangan" << endl;
        x = rand() % 10;
        perulanganWhile++;
    }
}