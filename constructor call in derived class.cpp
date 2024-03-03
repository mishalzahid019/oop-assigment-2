#include <iostream>
  using namespace std;
    class Message{
        public:
// for constructor implementation we define the function
   Message(void);
   string alertMessage;
  };
  Message::Message(void){
    alertMessage= " Hello";
  }

  class person:public Message{
    public:
    void getinfo(){
        string name;
        cout<<"Enter Your Name ";
        cin>>name;
        cout<< alertMessage <<" "<< name ;
    }
  };
  int main()
{
 person p;
 p.getinfo();

  }

