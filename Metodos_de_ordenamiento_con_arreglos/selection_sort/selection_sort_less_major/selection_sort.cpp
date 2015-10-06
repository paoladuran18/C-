#include <iostream>
#include <tpl_dynArray.H>

using namespace std;
using namespace Aleph;

int lesss( DynArray< int > &, int, int, int );
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

int lesss( DynArray< int > &a, int min, int i, int j )
  {
    for(min = i, j = i +1; j < a.size(); ++j )
            if ( a(j) < a(min) )
              min = j;
    return min;
  }

void seleection_sort( DynArray< int > &a ) //no coloco el tamaño del arreglo xq este es dinamico, 
																					//pero si no lo fuera si tendria q colocarlo
  {
    for( int i = 0, min, j; i < a.size() -1; ++i )
      {
        min = lesss( a, min, i, j );
        if ( a( min ) < a( i ) )
          swap( a( min ), a( i ) );
      }
  }
