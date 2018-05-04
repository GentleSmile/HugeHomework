DEPS = Admin.h Book.h History.h User.h
OBJ = main.o Admin.o Book.o History.o User.o

%.o: %.cpp $(DEPS)
	g++ -c $< -o $@ -O2 -std=c++11

main: $(OBJ)
	g++ $(OBJ) -o main -O2 -std=c++11

clean:
	rm *.o main
