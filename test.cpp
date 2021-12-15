#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  cout<<"Hello World!"<<endl;
  cout<<"My Name is Ridwan Rahin"<<endl;
  cout<<"   /|"<<endl;
  cout<<"  / |"<<endl;
  cout<<" /  |"<<endl;
  cout<<"/___|"<<endl;
  /*Just working with variebles*/
  string characterName="Ridwan";
  int characterAge;
  characterAge=17;
  cout<<"There once was a man named "<<characterName<<endl;
  cout<<"He was "<<characterAge<<" years old"<<endl;
  characterName="Rahin";
  characterAge=18;
  cout<<"He liked the name "<<characterName<<endl;
  cout<<"But did not like being "<<characterAge<<endl;
  /*Just working with various variebles*/
  char grade='A';
  string result="HSC Result";
  float gpa=4.78;
  int positive_number=12;
  int negetive_number=-12;
  float less_dec_number=12.567;
  double more_dec_number=12.5467890;
  bool is_male=true;
  bool is_female=false;
  cout<<"\tPrinting All variebles\n"<<endl;
  cout<<grade<<endl;
  cout<<result<<endl;
  cout<<gpa<<endl;
  cout<<positive_number<<endl;
  cout<<negetive_number<<endl;
  cout<<less_dec_number<<endl;
  cout<<more_dec_number<<endl;
  cout<<is_female<<endl;
  cout<<is_male<<endl;
  /*Just Constant char varieble*/
  cout<<'H'<<endl;
  /*basic string function*/
  string test=" hudai \n\n test";
  cout<<test<<endl;
  cout<<test.length()<<endl;
  cout<<test[1]<<endl;
  test[1]='c';
  cout<<test<<endl;
  cout<<test.find("hudai")<<endl;
  cout<<test.find("udai")<<endl; 
  string sub_test;
  sub_test=test.substr(1,1);
  cout<<sub_test<<endl;
  cout<<test.substr(3,3)<<endl;
  /*math*/
  cout<<35-34<<endl;
  cout<<10%3<<endl;
  cout<<2+2*10<<endl;//this gonna do 2*10=20 first 
  cout<<(2+2)*10<<endl;//this gonna do 2=2=4 first
  int num1=1;
  num1++;
  cout<<num1<<endl;
  num1--;
  cout<<num1<<endl;
  num1+=2; //i can do all other staf like[-][*][/]
  cout<<num1<<endl;
  cout<<10/3<<endl;//this will 3 couse these are all int more_dec_number
  cout<<10.0/3.0<<endl;//Now this will be an float number couse these are all float number
  /*besic math function*/
  cout<<pow(2,2)<<endl;//Normal Square
  cout<<sqrt(4)<<endl;//Normal root and i can enter decimael number too
  cout<<round(2.4)<<endl;//this will print 2 couse its decimel is less than 5
  cout<<round(2.6)<<endl;//This is gonna print 3 couse its decimel is more than 5
  cout<<ceil(4.1)<<endl;//no matter what decimel this will autometic increace number to next int number
  cout<<floor(4.8)<<endl;//no matter waht decimel id this , this will stay in currrent position
  cout<<fmax(17,20)<<endl;//it will print bigest number
  cout<<fmin(17,20)<<endl;//it will do the opposite of fmax
  /*Getting input from user*/
  int age;
  string full_user_name;
  string user_nickname;
  cout<<"Enter Your Full Name: "<<endl;
  getline(cin,full_user_name);//this will take a bunch of words
  cout<<"Enter Your Nickname: "<<endl;
  cin>>user_nickname;//this will just take 1 word
  cout<<"Enter Your Age: "<<endl;
  cin>>age;
  cout<<"Your Fullname is "<<full_user_name<<endl;
  cout<<"Your Nickname is "<<user_nickname<<endl;
  cout<<"You are "<<age<<" years old"<<endl;
  return 0;
} 
