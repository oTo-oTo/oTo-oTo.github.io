EXE = exe

exe: main.cpp
	g++ $< -o $@

clean:
	rm -rf $(EXE)