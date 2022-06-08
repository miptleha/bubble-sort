using System;
using System.Diagnostics;

namespace csharp
{
    class Program
    {
        static long GetMaxSubSum(int[] a)
        {
            long s = 0;
            long s1 = s;
            for (int i = 0; i < a.Length; i++) 
            {
                s += a[i];
                s1 = Math.Max(s1, s);
                if (s < 0) s = 0;
            }
    
            return s1;
        }

        static void Main(string[] args)
        {
            int n = 10000;
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = (int)Math.Pow(-1, i) * i;
            /*for (int i = 0; i < n; i++)
                Console.Write(a[i] + " ");
            Console.WriteLine();*/
            var sw = Stopwatch.StartNew();
            long res = 0;
            for (int i = 0; i < n; i++) {
                a[0]++;
                res += GetMaxSubSum(a);
                //Console.WriteLine(res);
            }
            sw.Stop();

            Console.WriteLine($"{sw.Elapsed} seconds");
        }
    }
}
