#pragma once
class Calculo
{
	public double Pi = 3, 14;

	public double Circunferencia(double r); {
		return 2.0 * Pi * r;
	}

	public double Volume(double r); {
		return 4.0 / 3.0 Pi * r * r * r;
	}
};

// para evitar que a classe anterior ficasse muito acumulada a nova classe corrige alguns pontos em relacao a Pi
