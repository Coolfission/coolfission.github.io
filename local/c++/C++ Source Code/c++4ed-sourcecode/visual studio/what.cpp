//=============================================
// C++ Programming in easy steps 4ed. [5:92]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

int main()
{
  string str = "C++" ;

  try
  {
    str.erase( 4 , 6) ;
  }
  catch( exception &error )
  {
    cerr << "Exception: " << error.what() << endl ;
  }
  system("PAUSE");
  return 0 ;
}
