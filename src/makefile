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
clean:
	rm -f testing vector.o core