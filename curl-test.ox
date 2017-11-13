#include "oxstd.h"
#include "CFexport.oxh"
						
main() {
    Get("http://econ.queensu.ca/index.html","test.html",TRUE);
}

/* OUTPUT CURRENTLY PRODUCED ON WINDOWS
Ox Professional version 7.20 (Windows_64/U/MT) (C) J.A. Doornik, 1994-2017
Link error: 'lib\libCFcurl' cannot load dll
Link error: 'lib\libCFcurl' cannot load dll
Link error: 'lib\libCFcurl' cannot load dll
Link error: 'Get' undefined function
*/
