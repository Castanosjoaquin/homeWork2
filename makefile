run-1: 
	echo "Ejecutando Ejercicio 1"
	g++ -Wall ej1/main.cpp ej1/Clock.cpp -o ej1c
	./ej1c

run-2:
	echo "Ejecutando Ejercicio 2"
	 g++ -std=c++14 ej2/main.cpp ej2/Curse.cpp ej2/Student.cpp -o ej2c
	./ej2c

run-3:
	echo "Ejecutando Ejercicio 3"
	g++ ej3/Entero.cpp ej3/Complejo.cpp ej3/Real.cpp ej3/Numero.cpp ej3/main.cpp -o ej3c
	./ej3c

run-4: 
	echo "Ejecutando Ejercicio 4"
	g++  ej4/Account.cpp  ej4/SavingAccount.cpp ej4/CheckingAccount.cpp ej4/main.cpp -o ej4c
	./ej4c