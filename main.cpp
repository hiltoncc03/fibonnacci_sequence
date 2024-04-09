#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> sequencia;
  int n;
  cin >> n;
  sequencia.push_back(0);
  sequencia.push_back(1);
  for(int i=0; sequencia.back()<n; i++){
    sequencia.push_back(sequencia[i]+sequencia[i+1]);
    if(sequencia.back()==n){
      cout<<"The number "<<n<<" is in the sequence"<<endl;
      break;
    }
  }
  cout<<"The number "<<n<<" isn't in the sequence"<<endl;
}
