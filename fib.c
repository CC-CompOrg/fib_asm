char fib(char n) {
    if(n<2) {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

void main() {
    char z = fib(5);
    return;
}

