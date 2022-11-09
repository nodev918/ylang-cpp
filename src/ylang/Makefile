
# run: ylang.o parser.o scanner.o
# 	g++ 

# ylang.o: ylang.cc
# 	g++ ylang.cc -o ylang.o -c

# parser.o: parser.cc
# 	g++ parser.cc -o parser.o -c

# scanner.o: scanner.cc
# 	g++ scanner.cc -o scanner.o -c

bin_name = ylang
objects = parser.o scanner.o ylang.o

run: $(bin_name)
	./$(bin_name)

ylang: $(objects)
	g++ -o ylang parser.o scanner.o ylang.o

%.o: %.cc
	g++ -o $@ -c $< 

clean: $(bin_name)
	rm *.o
	rm $(bin_name)