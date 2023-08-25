.DEFAULT: all

all: Hospital

clean:
	rm -rf Hospital *.o *.dSYM

Hospital: Hospital.o Patient.o PatientRegister.o WaitingList.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c -o $@ $^