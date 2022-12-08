char fib(char n) {
    if(n<2) {
        return 1;
    }
    // This line hides a lot of complexity...
    // Converting into something that has less
    // hidden steps
    //return fib(n-1)+fib(n-2);
    char a = fib(n-1);
    char b = fib(n-2);
    char c = a+b;
    return c;
}

void main() {
    char z = fib(5);
    return;
}

