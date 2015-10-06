#include <iostream>
#include <tpl_dynArray.H>

using namespace std;
using namespace Aleph;

int higher( DynArray< int > &, int, int, int );
void seleection_sort( DynArray< int > & );

int main()
  {
    DynArray< int > a;
    int aux;

    while( cin >> aux )
      a.append( aux );
  
    seleection_sort(a);

    for( auto &i: a )
      cout << i << " ";

    return 0;
  }

int higher( DynArray< int > &a, int major, int i, int j )
  {
    for(major = i, j = i +1; j < a.size(); ++j )
            if ( a(j) > a(major) )
              major = j;
    return major;
  }

void seleection_sort( DynArray< int > &a ) //no coloco el tamaño del arreglo xq este es dinamico, 
																					//pero si no lo fuera si tendria q colocarlo
  {
    for( int i = 0, major, j; i < a.size() -1; ++i )
      {
        major = higher( a, major, i, j );
        if ( a(major) > a(i) )
          swap( a(major), a(i) );
      }
  }
