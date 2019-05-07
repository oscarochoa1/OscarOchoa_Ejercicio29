plot.png: dacalor.dat grafica.py
	python grafica.py

%.dat : a.out
	./a.out 

a.out: archivo.cpp
	g++ archivo.cpp

clean:
	rm -rf a.out dacalor.dat plot.png *~