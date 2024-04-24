bin/test:src/tui_test.cpp
	g++ src/tui_test.cpp -o bin/test -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

run : bin/test
	./bin/test

bin/space:src/main.cpp
	g++ src/main.cpp -o bin/space -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

runTest: bin/space
	./bin/space

bin/ventana:src/ventana.cpp
	g++ src/ventana.cpp -o bin/ventana -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

runventana: bin/ventana
	./bin/ventana