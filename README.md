Measure time of execution of bubble sort algorithm in different programming languages.

This is set of console applications.   
Currently write for [python](python/main.py), [c#](csharp/Program.cs), [c++](cpp/main.cpp), [javascript](js/main.js).   
All code written and run under [Visual Studio Code](https://code.visualstudio.com/) (with required compilers and extensions) in Windows 10.

## Time of execution
Measure bubble sort for array with 10000 elements. Changing elements is done in a function to measure the function call.     
When possible programs compiled with and without optimization, then launched from the command line without debugger.   
Run on Acer Swift 3 with Core-i5.

|Language|Compiler|Time (seconds)| Time with optimization (seconds)|
|-|-|-|
|Python|Python 3.10|13|-|
|C#|.NET 5|0.29|0.042|
|C++|g++ 11|0.23|0.031|
|JavaScript|Node 10|0.073|-|
