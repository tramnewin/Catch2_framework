testing:
	-@echo "--making factorial.cpp"
	g++ vector.cpp -Wall -o vector 
	-@echo "--executing program"
	./vector --success
unitTesting:
	-@echo "--making requireUnit.cpp"
	g++ requireUnit.cpp -Wall -o requireUnit 
	-@echo "--executing program"
	./requireUnit --success
main:
	-@echo "--making main.cpp"
	g++ main.cpp -Wall -o main 
	-@echo "--executing program"
	./main
clean:
	rm -f testing vector core
	rm -f unitTesting requireUnit core
	rm -f main main core