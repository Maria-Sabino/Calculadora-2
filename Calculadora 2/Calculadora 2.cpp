using System;  

namespace calculadora

{

	class Program 
	{

		static void Main(string[] args)
		{
			Calculadora calc = new Calculadora();

			Console_WreiteLine("Digite o valor do raio");
			double raio = double.Parse(Console.ReadLine(), CultureInfo.InvarianCulture);

			double circ = Circunferencia(raio);
			double volume = volume(raio);

			Console.WriteLine("Circunferência: " + circ.ToString("F2", CultureInfo.InvariantCulture));
			Console.WriteLine("Volume: " + volume.ToString("F2", CultureInfo.InvariantCulture)); 
			Console.WriteLine("Valor de Pi: " + Pi.Tostring("F2", CultureInfo.Invariant));
         }

	};
}



