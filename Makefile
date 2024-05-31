all:
	g++ src/main.cpp -o bin/app && ./bin/app

start:
	python src/main.py