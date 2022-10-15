fruitSalad: driver.o seed.o fruit.o banana.o
	g++ -o fruitSalad driver.o seed.o fruit.o banana.o
driver.o: driver.cpp banana.o
	g++ -c driver.cpp
seed.o: seed.cpp seed.h
	g++ -c seed.cpp
fruit.o: fruit.cpp fruit.h seed.h
	g++ -c fruit.cpp
banana.o: banana.cpp banana.h fruit.h
	g++ -c banana.cpp
clean:
	rm *.o fruitSalad