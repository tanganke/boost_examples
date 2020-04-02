CC=g++
CSTD=-std=c++17
LIBS=-lboost_filesystem -lboost_system

%:%.cpp
	$(CC) -g -Wall $(CSTD) -o $@ $^ $(LIBS)

gitignore:
	@find . -executable -type f -exec basename  {} \; > .gitignore

DIRS=utility memory filesystem string

gitignore_all:
	@for dir in $(DIRS); \
	do \
		cd $${dir};\
		make gitignore;\
		cd ..;\
	done