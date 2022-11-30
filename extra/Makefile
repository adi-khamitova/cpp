vpath % $(project)
name = $(project)

obj := $(patsubst %.cpp,%.o,$(wildcard $(project)/*.cpp))

all: $(obj)
	$(CXX) $^ 

clean:
	rm $(project)/*.o