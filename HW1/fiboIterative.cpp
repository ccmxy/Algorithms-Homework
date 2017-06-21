#include <iostream>
#include <cstdlib>

using namespace std;
int fibonacci(int n);

int main(int argc, char *argv[])

{
    int nth =  (atoi)(argv[1]);

    int fibo = fibonacci(nth);
    cout << "The Fibonacci number at position " << nth
   	 << " is: " << fibo << endl;

    return 0;
}

int fibonacci(int n){
    int oldFib = 0, curFib = 1, temp, idx, fib;
    for (idx = 0; idx < n; idx++){
   	 temp = oldFib + curFib;
   	 oldFib = curFib;
   	 curFib = temp;
    }
    return oldFib;
}


