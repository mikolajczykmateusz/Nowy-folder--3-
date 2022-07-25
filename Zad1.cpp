#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
 
using namespace std;
using std::fstream;
 
int main(int argc, char *argv[]) {
  int n;
  cout<<"Liczba losowanych punktow n = ";
  cin>>n;
  srand(time(NULL));
  float x,y;
  int k=0;
  for(int i=1; i<=n; i++){
    x=rand()/float(RAND_MAX);
    y=rand()/float(RAND_MAX);
    if(x*x+y*y<=1) k++;
  };
  float p=4.*k/n;
  cout<<"pi = "<<setprecision(5)<<p<<endl;
  
  char c;
  cin>>c;
}
