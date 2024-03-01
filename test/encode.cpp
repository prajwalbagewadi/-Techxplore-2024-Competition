/*
Competition Techxplore 2024: Design Machine level module
 
name:Prajwal N.Bagewadi
class:SY.BCA(Sci)
roll No:05

*/

#include<iostream>
/*
bitset libary is a array of booleans but stored together as a single array
include<bitset>
bitset<8> bitset <array size> var_name (initilization)
*/
#include<bitset>
#include<fstream>
#include<string>
using namespace std;
class worker{
  public:
  ifstream iput;
  ofstream oput;
  // as data_type_(bitset<size>) object/var
  bitset<8> binary_data;
  void accept(string filename){
    //obj to read user file for binary calculation
    iput.open(filename,ios::in);
    // obj create new file for result binary store
    oput.open("res.dat",ios::out|ios::binary);
  }
  void process_binary(){
    // condition to check that ptr has not reached eof.
    while(!iput.eof()){
     //get single char from file.
      const char c=iput.get();
      cout<<c<<"_";
     //convert char from file to binary represention
      bitset<8> binary(c);
      cout<<binary<<" "<<endl;
      binary_data=binary;
      //insert binary represention into result file.
      oput<<binary_data<<"\n";
    }
    iput.close();
    oput.close();
  }
};
int main(){
  worker obj;
  obj.accept("testCode.cpp");
  obj.process_binary();
  //obj.store_binary();
  return 0;
}
