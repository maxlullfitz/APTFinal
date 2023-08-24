# include < iostream >
# include < fstream >
# include < string >

using string ;
 using cout ;
using endl ;

 int main ( void ) {
string filename ( " file . txt " ) ;
std :: ifstream inFile ;

inFile . open ( filename ) ;

if ( inFile . good () ) {
while (! inFile . eof () ) {
string line ;

std :: getline ( inFile , line ) ;

cout << " Read : " << line << endl ;
}
}

// What should go here ?

return EXIT_SUCCESS ;