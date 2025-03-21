/** This program will open a text file, read it and copy its content into
* another file
* The text file names are passed on the command line as an arguments.
* e.g. ./myCopier Example.txt copied.txt
* The code below will read out line-by-line the contents of Example.txt
* and as it reads a line send that line to copied.txt
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define FILE_PATH "/home/debian/WilsonHW6/Problem2"
int main(int argc, char* argv[]){
if(argc!=3){              //Checks to make sure the right number of arguments were given
  cout << endl;
  cout << "Usage is reading-file and writing to another file: " << endl;
  cout << "Please enter two txt files in the command line" << endl;
   return 2;
   }

  string in(argv[1]);
  string out(argv[2]);                            
  cout << "Starting the copying program" << endl;
  ifstream ifs; 
  ofstream ofs;                   //Sets up the streams one for input and one for output
  string line;
  string filenamein = "/" + in;
  string filenameout = "/" + out;   //Sets up the file names
  cout << "The string input filename is: " << filenamein << endl;
  cout << "The string output filename is: " << filenameout << endl;
  string pathNamein = FILE_PATH + filenamein;
  string pathNameout = FILE_PATH + filenameout;       //makes file names into paths that can be used
  cout << "The input string pathName is: " << pathNamein << endl;
  cout << "The output string pathName is: " << pathNameout << endl;
  ifs.open((pathNamein).c_str(),ifstream::in);
  ofs.open((pathNameout).c_str(),ofstream::out); //Opens both files
  while(getline(ifs,line)) {
  ofs << line << endl;        //Gets a line from input text then sends it to output text
  }
  ifs.close();
  ofs.close();  //closes both files after completion.
}
