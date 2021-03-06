# C-Lox
This project follows Bob Nystrom's book [Crafing Interpreters](http://www.craftinginterpreters.com/contents.html). It is based on the second part of the book in which the toy language **Lox** is implemented in C programming language.
# Key Language Features
* Interpreted
* Uses a Bytecode Virtual Machine
* Garbage Collected
* Dynamically typed
# Project Goals
* Learn all the aspects of building a programming language. Lexing, parsing, compiling, memory managing etc.
* Practice working with C.
* Learn how programming languages work.
# Building
Simply open terminal in Makefile's directory and run ```make``` command. 
# Example Script
```javascript
class A {
    get() {
        return m_second;
    }
}

fun fib(n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

var instance = A();
instance.m_second = "hello";
var second = instance.m_second;

print second;

var fib_res = fib(10);
print fib_res;

{
    var x = 10;
    {
        var x = 20;
        print x;
    }
}
```
**Script's Output:**
```
hello
55
20
```
