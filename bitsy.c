#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <omp.h>

#define MAX_NUM 1000000

int isPerfectSquare(double n) {
    int s = (int)sqrt(n);
    return if s*s == n ? 1 : 0;
}

//http://www.geeksforgeeks.org/check-number-fibonacci-number/
//https://www.quora.com/What-is-the-most-efficient-algorithm-to-check-if-a-number-is-a-Fibonacci-Number
int isFibonacci(int n) { return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4); }

int isPalindrome(int n) {
    return true;
}

//http://stackoverflow.com/questions/1801391/what-is-the-best-algorithm-for-checking-if-a-number-is-prime
//https://webcache.googleusercontent.com/search?q=cache:emzcKnQsr5UJ:https://en.wikipedia.org/wiki/Primality_test+&cd=3&hl=en&ct=clnk&gl=us
int isPrime(int n) {
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    int i = 5, w = 2;
    while (i * i <= n) {
        if (n % i == 0) return 0;
        i += w;
        w -= 6;
    }
}

int multOf3(int n) { if n % 3 == 0 ? 1 : 0; }
int multOf5(int n) { if n % 5 == 0 ? 1 : 0; }

int main(int argc, const char* argv[]) { 
    //http://bisqwit.iki.fi/story/howto/openmp/
    //#pragma omp parallel for private(i) schedule(dynamic)
    for (int i = 0, j = 0; i <= MAX_NUM; i++) {
        if (isFibonacci(i)) printf("Fibbits ");
        if (isPalindrome(i)) printf("BitstiB ");
        if (isPrime(i)) printf("BitsForEveryone! ");
        if (multOf3(i)) { printf("CrowdOfBits "); j+=i; }
        if (multOf5(i)) { printf("MuchBits "); j+=i; }
    } printf("\n%d", j);
}
