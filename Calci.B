using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace calculator1
{
    class Program
    {
        static void Main(string[] args)
          
        {
            double firstnum;
            double secondnum;
            double answer;
            string options;

            Console.WriteLine("\t\t\tBasic calculator Program");

            Console.WriteLine("\t\t\t-------------------------");

            Console.WriteLine("\t\t\tEnter the First number\n");
            firstnum=Double.Parse(Console.ReadLine());

            Console.WriteLine("\t\t\tSelect Opreations (+,-,*,/,%,=)");
            options=(Console.ReadLine());

             Console.WriteLine("\t\t\tEnter the Second number\n");
            secondnum=Double.Parse("\t\t\t" + Console.ReadLine());

            if(options=="+")
            {
                answer=firstnum + secondnum;
                Console.Write("/n" + answer);
            }

            if(options=="-")
            {
                answer=firstnum - secondnum;
                Console.Write("/n" + answer);
            }
            if(options=="*")
            {
                answer=firstnum * secondnum;
                Console.Write("/n" + answer);
            }
            if(options=="/")
            {
                answer=firstnum*secondnum;
                Console.Write("/n" + answer);
            }
            if(options=="%")
            {
               answer=firstnum % secondnum;
                Console.Write("/n" + answer);
            }
            if(options=="^")
            {
                answer=firstnum = secondnum;
                Console.Write("/n" + answer);
            }
            Console.Write("\n" + "Press Any Key to Exit");
            Console.ReadKey();
            }
            }
    }
}
