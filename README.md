# A recursive program implemented translated from C to assembly
This code demo is provided in a GitHub repository so that the history can be used to see the evolution of the code.

# Problem:
Translate a recursive C fibonacci program into HMMM assembly. This code can be found in fib.c

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

# Files:
    README.md - this documentation
    fib.c     - the C code
    fib.lbl   - labelled assembly that macro_hmmm can process
