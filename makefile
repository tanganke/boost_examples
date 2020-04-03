CC=g++
CSTD=-std=c++17
EXE=`find . -name "*.cpp" -exec basename {} .cpp \;`

build:
	make $(EXE)
clean:
	rm $(EXE)

%:%.cpp
	$(CC) -g -Wall -Wextra $(CSTD) -o $@ $^ $(LIBS)


gitignore:
	@find . -executable -type f -exec basename  {} \; > .gitignore

DIRS=utility memory filesystem string container date_time concurrency network

build_all:
	@for dir in $(DIRS); \
	do \
		cd $${dir};\
		make build;\
		cd ..;\
	done
gitignore_all:
	@for dir in $(DIRS); \
	do \
		cd $${dir};\
		make gitignore;\
		cd ..;\
	done
gitadd: gitignore_all
	git add *
gitpush: gitignore_all
	git push
gitsummary:
	@git log --format='%aN' | sort -u | while read name; do echo -en "$$name\t"; git log --author="$$name" --pretty=tformat: --numstat | awk '{ add += $$1; subs +=$$2; loc += $$1 - $$2 } END { printf "added lines: %s, removed lines: %s, total lines: %s\n", add, subs, loc }' -; done