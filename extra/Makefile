project = false
ifeq ($(project), false)
SUBDIRS := $(patsubst %/., %, $(wildcard */.))

all:
	for dir in $(SUBDIRS) ; do \
		make project=$$dir ; \
	done
else

obj := $(patsubst %.cpp,%.o,$(wildcard $(project)/*.cpp))

all: compile link

compile: $(obj)

%.o: %.cpp
	$(CXX) -c -o $@ $^

link:
	$(CXX) $(obj) -o '$(project)/$(project)'

endif

clean:
	rm */*.o