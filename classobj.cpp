#include<iostream>
using namespace std;

class Employee{
    int Salary;
    int newSalary;
    char name[20];
    int distance;
    void print_detail();
    int call_travellallouce();
    public:
    void enter_details();
};

void Employee::enter_details(){

    cout << "\n Enter Your Name \t";
    cin >> name;
    cout<< "\n Enter Your Distance from Office in Km \t";
    cin >> distance;
    cout<< "\n Enter Your current salary \t";
    cin>>Salary;
    int x = call_travellallouce();
    newSalary = Salary + x + 200;
    print_detail();
}

int Employee::call_travellallouce(){
    return distance * 20;
}

void Employee::print_detail()
{
      printf("\n Dear %s Your Current Salary %i INR, is Increased to %i INR \nby Adding Respective Travell Allounce to your respectice residile.\nThanking You", name, Salary, newSalary);
}


int main()
{
    Employee E;
    Employee S;
    E.enter_details();
    S.enter_details();
    

    return 0;
}
