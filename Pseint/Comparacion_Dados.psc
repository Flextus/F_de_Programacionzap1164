Algoritmo Comparacion_Dados
	Escribir "Inserte dado 1" 
	Leer d1
	Escribir "Inserte dado 2"
	Leer d2
	Si (d1>0& d2<=6)& (d2>0&d1<=6) Entonces
		Si (d1=d2) Entonces
			Escribir "Los dados son iguales"
		SiNo
			Si d1>d2 Entonces
				Escribir d1, " Es mayor a ", d2
			SiNo
				Escribir d2, " Es mayor a ", d1
			FinSi
		FinSi
	SiNo
		Escribir "Numero fuera de rango, no es valido"
	FinSi
FinAlgoritmo
