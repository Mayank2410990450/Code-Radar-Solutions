// Your code here...
// Your code here...

int isPrime(int num) {
    if (num <= 1) 
        return 0; // Not prime
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    
    return 1; // Prime
}