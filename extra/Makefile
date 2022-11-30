vpath % $(project)

obj := $(patsubst %.cpp,%.o,$(wildcard $(project)/*.cpp))

all: $(obj)
	$(CXX) $^ -o $(project)/'$(project)'

clean:
	rm $(project)/*.o