#include <stdio.h>

// Function to compute Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to compute Extended GCD to find modular multiplicative inverse (d)
int modInverse(int e, int phi) {
    int t = 0, newt = 1;
    int r = phi, newr = e;

    while (newr != 0) {
        int quotient = r / newr;

        int temp_t = t - quotient * newt;
        t = newt;
        newt = temp_t;

        int temp_r = r - quotient * newr;
        r = newr;
        newr = temp_r;
    }

    if (r > 1) return -1; // e is not invertible
    if (t < 0) t = t + phi;

    return t;
}


// Function to compute (base^exp) % mod safely without integer overflow
long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
int main() {
    int p = 7;
    int q = 17;

    int n = p * q;
    int phi = (p - 1) * (q - 1);

    int e = 5;

    if (gcd(phi, e) != 1 || e <= 1 || e >= phi) {
        printf("Error: e must be coprime with phi(n) and satisfy 1 < e < phi(n).\n");
        return 1;
    }

    int d = modInverse(e, phi);

    int message = 42;

    long long encrypted = power(message, e, n);
    printf("Encrypted message: %d\n", encrypted);

    long long decrypted = power(encrypted, d, n);
    printf("Decrypted message: %d\n", decrypted);

    return 0;
}
