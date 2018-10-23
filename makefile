normal: Normal_run

test: unit_Test

unit_Test: linked_list.h linked_list_testcase.c linked_list.c Gtest_main.c libgtest.a 
	 g++ -isystem ${GTEST_DIR}/include -pthread linked_list_testcase.c linked_list.c Gtest_main.c libgtest.a -o unit_Test

libgtest.a: 
	g++ -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o
	
Normal_run: string.o main.o
	g++ -isystem ${GTEST_DIR}/include -pthread string.o main.o -o Normal_run

string.o: linked_list.c linked_list.h
	g++ -isystem ${GTEST_DIR}/include -pthread linked_list.c -c 
	

	
clean: 
	rm -f *.o