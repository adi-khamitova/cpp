obj = main.o listStorage.o

all: $(obj)

$(obj): %.o: %.cpp 
	$(CXX) -c -o $@ $^

clean:
	rm $(obj)