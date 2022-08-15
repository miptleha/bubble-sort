Measure time of execution of bubble sort algorithm in different programming languages.

This is set of console applications.   
Currently write for [Python](python/main.py), [C#](csharp/Program.cs), [C++](cpp/main.cpp), [JavaScript](js/main.js).   
All code written and run under [Visual Studio Code](https://code.visualstudio.com/) (with required compilers and extensions) in Windows 10.
If possible, compiled debug and release (with optimization) versions of executable files.   
Run on Acer Swift 3 with Core-i5.

## Time of execution
Measure [bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) for integer array with 10000 elements.   
Changing elements is done in a function to measure the function call.     

|Language|Compiler|Time of execution (seconds)| Time with optimization (seconds)|
|-|-|-|-|
|Python|Python 3.10|8.5|-|
|C#|.NET 5|0.28|0.042|
|C++|g++ 11|0.23|0.031|
|JavaScript|Node.JS 16|0.058|-|

## Bonus: maximim subarray sum calculation
The task of finding a [contiguous subarray with the largest sum](https://en.wikipedia.org/wiki/Maximum_subarray_problem).   
Use O(n) algorithm. Sum for 10000 elements calculates 10000 times.   
Code: [Python](python2/main.py), [C#](csharp2/Program.cs), [C++](cpp2/main.cpp), [JavaScript](js2/main.js).

|Language|Compiler|Time of execution (seconds)| Time with optimization (seconds)|
|-|-|-|-|
|Python|Python 3.10|15.4|-|
|C#|.NET 5|0.35|0.14|
|C++|g++ 11|0.36|0.09|
|JavaScript|Node.JS 16|0.10|-|
