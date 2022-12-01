subdirs := $(patsubst %/., %, $(wildcard */.))

all: $(subdirs)

$(subdirs):
	echo $@
	$(MAKE) build project=$@

.PHONY: all $(subdirs)

obj := $(patsubst %.cpp,%.o,$(wildcard $(project)/*.cpp))

build: compile link

compile: $(obj)

%.o: %.cpp
	$(CXX) -c -o $@ $^

link:
	$(CXX) $(obj) -o '$(project)/$(project)'

clean:
	rm */*.o
# 1. define 
# 2. if else
# 3. bash
# 4. subdirs