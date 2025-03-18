#include <iostream>
using namespace std;

double hitungIpk(double total, int sks)
{
    return total / sks;
}

string predikat (double ipk){
    if (ipk < 10){
        return "memuaskan";
    }
    else{
        return "cumlaude";
    }
}


