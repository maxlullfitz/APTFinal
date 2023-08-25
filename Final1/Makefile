.default: all

all: qwirkle

clean:
	rm -rf Hospital *.o *.dSYM

Hospital: Patient.o PatientRegister.o Waiting.o Hospital
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
