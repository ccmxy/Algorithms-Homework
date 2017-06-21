#include <iostream>
#include <cstdlib>

using namespace std;

int rFibNum(int x);

int main(int argc, char *argv[])
{
    int nth =  (atoi)(argv[1]);

cout << nth << endl;

    cout << "The Fibonacci number at position " << nth
   	 << " is: " << rFibNum(nth)
    << endl;

    return 0;
}



int rFibNum(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return rFibNum(x-1)+rFibNum(x-2);
}

