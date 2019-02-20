#include<iostream.h>
using namespace std;
class his{
  private:
    int x,y,z;
  public:
    void dist(int x1,int y1,int z1,int x2,int y2,int z2);
    ~his(){/*Destoructor*/};
};
his::dist(int x1,int y1,int z1,int x2,int y2,int z2){
  cout<<x1<<','<<y1<<','<<z1<<endl;
  cout<<x2<<','<<y2<<','<<z2<<endl;
}
void func(){
  cout<<"func!"<<endl;
}

int main(){
  his h1;
  h1.dist(1,1,1,2,2,2);
  func();
  cout<<"hello,new git."<<endl;
  return 0;
}

