using System;
using System.Diagnostics;

namespace csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 10000;
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = n - i;
            /*for (int i = 0; i < n; i++)
                Console.WriteLine(a[i]);
            Console.WriteLine();*/
            var sw = Stopwatch.StartNew();
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j])
                        (a[i], a[j]) = (a[j], a[i]);
                }
            }
            sw.Stop();
            /*for (int i = 0; i < n; i++)
                Console.WriteLine(a[i]);*/

            Console.WriteLine($"{sw.Elapsed} seconds");
        }
    }
}
