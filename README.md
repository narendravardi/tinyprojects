# tinyprojects
I will be uploading all the tiny projects that I develop which can be help to save a lot of time some times.

#tinyproject 1 (wrong_line_index.py)
This file can be used for checking at which line does two files being compared differ. 
I made this so It will be easy for me to compare my original output with the output of the correct output(HackerRank).
This will print the line number where the two files differ.

#tinyproject 2(addBigints.cpp)
This file consists of a function 'addBigints' which can be used to add two big integers in c++. Big integers are stored in string format. Function accepts two arguments and returns the sum of two arguments.

#tinyproject 3(mulBigints.cpp)
This file consists of a function 'mulBigints' which can be used to multiply two big integers in c++. Big integers are stored in string format. Function accepts two arguments and returns the sum of two arguments.

#tinyproject 4(factorialBigints.cpp)
This file is used for generating factorial of a number, without worrying about the integer over flows as it uses strings to store data and mulBigints function for generating factorial of a number.  
The 75th factorial, which is calculated from this program is 
24809140811395398091946477116594033660926243886570122837795894512655842677572867409443815424000000000000000000

#tinyproject 5(mulBigintRecursionOptimized.cpp)
Similar to the tinyproject 3, with reduced time complexity. It works on the divide and conquer strategy. This algorithm is explained nicely by 'Tim	Roughgarden' in his first week class of 'Design and Analysis of Algorithms Coursera course.'

#tinyproject 6(subBigint.cpp)
This file consists of a function 'subBigints' which can be used to substract two big integers in c++. Big integers are stored in string format. Function accepts two arguments and returns the sum of two arguments.

#tinyproject 7(brainfuck_compiler.py)
brainfuck is an extremely minimal programming language with just 8 commands. 

These commands are very simple to understand also.

There are eight commands:
<pre>
+ : Increments the value at the current cell by one.
- : Decrements the value at the current cell by one.
> : Moves the data pointer to the next cell (cell on the right).
< : Moves the data pointer to the previous cell (cell on the left).
. : Prints the ASCII value at the current cell (i.e. 65 = 'A').
, : Reads a single input character into the current cell.
[ : If the value at the current cell is zero, skips to the corresponding ].Otherwise, move to the next instruction.
] : If the value at the current cell is zero, move to the next instruction.Otherwise, move backwards in the instructions to the corresponding [ .
[ and ] form a while loop. Obviously, they must be balanced.
</pre>
I was learning python and Hence, I have taken up the project of developing brainfuck compiler in python. Advanced implementation is not done as I have not worked with brainfuck. It is just a simple compiler without any exception handlings. 
It will accept only one line of brainfuck source code, hence care should be taken.
<pre> ++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++. </pre>
Above code taken from wikipedia, prints "Hello World!" 

#tinyproject 8(comp.py)
How many times have you written "javac test.java && java test" in order to compile and execute test.java file???
In order to reduce the length of the command that should be typed in order to compile and execute a program...
I have developed this python script. This file takes as command line arguments name and extension of the file 
and executes commands for compiling and executing the program.
For now it supports only c, c++, java, python, scala and racket