# pon aquí el camino a la biblioetca aleph-w
ALEPH = /home/paoladuran/Bibliotecas/Aleph/aleph
#ALEPH = ~/Dropbox/aleph-w/aleph

# pon aquí en camino al compilador c++
CXX = clang++

OPTIMIZATION = -O0

WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses 

FLAGS = -DDEBUG -D_GLIBCXX__PTHREADS -g $(OPTIMIZATION) -std=c++11 $(WARN)

INCLUDE = -I. -I $(ALEPH) 

LIBS = -L $(ALEPH) \
       -lAleph -lnana -lc -lm -lgsl -lgslcblas -lgmp -lmpfr -lasprintf -lpthread


multiplos_listas: multiplos_listas.cpp
	$(CXX) $(FLAGS) $(INCLUDE) $@.cpp -o $@  $(LIBS)
