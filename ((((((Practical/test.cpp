#include<iostream>

#include<math.h>

#include<string>

using namespace std;
class Person {
  private:
    string FirstName;
  string LastName;
  int PersonalID;
  double Salary;
  double WorkingHours;
  double CostPerHour;
  public:
    void set_FieldName();
  void get_FieldName();
  void gett_FieldName();
  void set_PersonalID();
  void set_Name();
  void LastNamesortList();
  void in_FirstName();
  void in_FamilyName();
  void in_Workinghour();
  void in_Costperhour();
};
class HRM {
  private:
    Person e[100];
  Person temp[100];
  public:
    void AddPerson();
  void DeletePerson();
  void SearchPerson();
};
int n = 0, i = 0, x = 8248001, y[100];
bool flag = 0;
int z[100];
string h[100];

double sal[100];
int check = 0;
void::HRM::AddPerson() {
  int x;
  char redo;
  do {
    n++;
    e[i].set_FieldName();
    i++;
    cout << "\nThe employee with the following information has been added:" << endl;
    cout << "\nFirst Name       Last Name       Personal ID         Salary per year (Euros)";
    cout << "\n--------------   --------------  ------------       -------------------------" << endl;
    for (int i = 0; i < n; i++) {
      e[i].get_FieldName();
    }
    cout << "do u wont to add another employee" << endl;
    cin >> redo;
  }
  while ((redo == 'y' || redo == 'Y'));
}
void HRM::DeletePerson() {
  int empId;
  bool lol;
  char redo1, redo2;
  lol = false;
  lebel:
    cout << "ID of employee to remove: ";
  while (!(cin >> empId)) {
    cout << "Please  enter a number!  Try again: ";
    cin.clear();
    cin.ignore(1000, '\n');
  }
  for (i = 0; i < n; ++i) {
    if (y[i] == empId) {
      e[i] = e[i + 1];
      lol = true;
      e[i].set_Name();
      cin >> redo2;
      if (redo2 == 'Y' || redo2 == 'y') {
        int a;
        a = n;
        cout << "\nThe employee with the following information has been removed from the system:" << endl;
        cout << "\nFirst Name       Last Name       Personal ID         Salary per year (Euros)";

        cout << "\n--------------   --------------  ------------       -------------------------" << endl;

        for (int i = 0; i < a; i++) {
          e[i].get_FieldName();
          a--;
          n = a;
          n++;
        }
      }
      cout << endl;
    }
  }
  if (lol == false) {
    cout << "Sorry, there is not any employee with requested personal number." <<
      " Do you want to repeat delete by entering the new personal number (y/n)?:";
    cin >> redo1;
    if (redo1 == 'Y' || redo1 == 'y') {
      goto lebel;
      cout << endl << endl;
    }
  }
}
void::Person::in_FirstName() {
  cin >> FirstName;
}
void::Person::in_FamilyName() {
  cin >> LastName;
}
void::Person::in_Workinghour() {
  cin >> WorkingHours;
  Salary = WorkingHours * CostPerHour * 52;
}
void::Person::in_Costperhour() {
  cin >> CostPerHour;
  Salary = WorkingHours * CostPerHour * 52;
}
void HRM::SearchPerson() {
  int c;
  char redo1;
  string familyname;
  double min, max;
  do {
    cout << "Search is based on two different fields (1.family name, 2.Salary), please enter your choice?=" << endl;
    cin>>c;
    while (!(cin >> c)) {
      cout << "Please  enter a number!  Try again: ";
      cin.clear();
      cin.ignore(1000, '\n');
    }
    if (c == 2) {
      cout << "Please define your search range for salary of employees ." << endl;
      cout << "What is minimum salary for search (S_min)?=" << endl;
      while (!(cin >> min)) {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
      }
      cout << "What is maximum salary for search (S_max)?=" << endl;
      while (!(cin >> max)) {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
      }
      int a;
      a = n;
      cout << "\nThe employee with the following information has been viewed to the system:" << endl;
      cout << "\nFirst Name       Last Name       Personal ID         Salary per year (Euros)";
      cout << "\n--------------   --------------  ------------       -------------------------" << endl;
      for (int i = 0; i < n; i++) {
        if (z[i] > min && z[i] < max) {
          cout << "naaaaaaaaaaaam" << n << endl;
          e[i].gett_FieldName();
          cout << "matching=" << z[i];
        }
      }
    } else if (c == 1) {
      cout << "Please enter the family name of employee?" << endl;
      cin >> familyname;
      cout << "\nThe employee with the following information has been viewed to the system:" << endl;
      cout << "\nFirst Name       Last Name       Personal ID         Salary per year (Euros)";
      cout << "\n--------------   --------------  ------------       -------------------------" << endl;
      for (int i = 0; i < n; i++) {
        if (h[i] == familyname) {
          cout << "naaaaaaaaaaaam" << n << endl;
          e[i].gett_FieldName();
          cout << "matching=" << z[i];
        }
      }
    }
    cout << "\nDo you want to Search any other field (y/n)?\n" << endl;
    cin >> redo1;
  }while (redo1 == 'y' || redo1 == 'Y');
}
void::Person::LastNamesortList() {
  int temp2;
  char temp, temp1;
}
void::Person::set_Name() {
  cout << "Do you really want to delete employee" << FirstName << "\t" << LastName << "(y/n)?:";
}
int k = 0;
void::Person::set_FieldName() {
  PersonalID = x;
  x++;
  cout << n;
  cout << "First Name=";
  while (!(cin >> FirstName)) {
    cout << "Please  enter a string!  Try again: ";
    cin.clear();
    cin.ignore(1000, '\n');
  }
  cout << "Last Name=";
  while (!(cin >> LastName)) {
    cout << "Please  enter a string!  Try again: ";
    cin.clear();
    cin.ignore(1000, '\n');
  }
  cout << "How many hours a week is his/her work? =";
  while (!(cin >> WorkingHours)) {
    cout << "Please  enter a number!  Try again: ";
    cin.clear();
    cin.ignore(1000, '\n');
  }
  cout << "How much per hour is his/her salary? =";
  while (!(cin >> CostPerHour)) {
    cout << "Please  enter a number!  Try again: ";
    cin.clear();
    cin.ignore(1000, '\n');
  }
  Salary = WorkingHours * CostPerHour * 52;
  z[i] = Salary;
  sal[i] = Salary;
  h[i] = LastName;
  y[k] = PersonalID;
  k++;
}
void::Person::get_FieldName() {
  cout << FirstName << "\t\t" << LastName << "\t\t\t" << PersonalID << "\t\t\t" << Salary << "\t" << endl;
}
void::Person::gett_FieldName() {
  cout << FirstName << "\t\t" << LastName << "\t\t\t" << PersonalID << "\t\t\t" << Salary << "\t" << endl;
}
int main() {
  HRM info;
  int c;
  char operation, ch;

  cout << "HUMAN RESOURCE MANAGEMENT" << endl;
  do {
    cout << "To do specific task please choose one of the following commands." << endl << endl << endl;

    cout << "    1. Add new employee" << endl;

    cout << "    2. Delete employee information" << endl;

    cout << "    3. search employee information" << endl;

    cout << "    4. Quit" << endl << endl;

    while (!(cin >> c)) {
      cout << "Please  enter a number!  Try again: ";
      cin.clear();
      cin.ignore(1000, '\n');
    }
    switch (c) {
    case 1:
      cout << "\nEnter the information of the new employee" << endl;
      info.AddPerson();
      break;

    case 2:
      info.DeletePerson();
      break;
    case 3:
      info.SearchPerson();
      break;
    default:
      cout << "\nInvalid option try again";
    }
    cout << "\ndo u want to continue";
    cin >> ch;
  }
  while (ch == 'y' || ch == 'Y');
  system("pause");
  return 0;
}
