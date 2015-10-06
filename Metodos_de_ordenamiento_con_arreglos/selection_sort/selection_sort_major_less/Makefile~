ALEPH = /home/paoladuran/Bibliotecas/Aleph/aleph
#ALEPH = ~/Dropbox/aleph-w/aleph

CXX = clang++

OPTIMIZATION = -O0

WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses 

FLAGS = -DDEBUG -D_GLIBCXX__PTHREADS -g $(OPTIMIZATION) -std=c++11 $(WARN)

INCLUDE = -I. -I $(ALEPH) 

LIBS = -L $(ALEPH) \
       -lAleph -lnana -lc -lm -lgsl -lgslcblas -lgmp -lmpfr -lasprintf -lpthread

selection_sort: selection_sort.cpp
	$(CXX) $(FLAGS) $(INCLUDE) $@.cpp -o $@  $(LIBS)

clean:
	rm main

