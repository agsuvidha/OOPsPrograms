#include <iostream>

using namespace std;

class student
{
  string name;
  int marks[5];
  int roll;
  int percent;
  char grade;
public:
  void input ()
  {
    cout << "\nEnter the name of the student\n";
    cin >> name;
    cout << "\nEnter the roll number\n";
    cin >> roll;
    for (int i = 0; i < 5; i++)
      {
	cout << "Enter marks\n";
	cin >> marks[i];
      }
  }

  void calculate ()
  {
    int sum = 0;
    for (int x = 0; x < 5; x++)
      {

	sum = sum + marks[x];
      }
    cout << sum;
    percent = (sum * 100) / 500;
  }
  void grades ()
  {
    if (percent >= 90)
      {
	grade = 'A';
      }
    else if (grade <= 75 && grade >= 60)
      {
	grade = 'B';
      }
    else if (grade >= 45 && grade <= 60)
      {
	grade = 'B';
      }
    else
      {
	grade = 'D';
      }
  }
  void display ()
  {
    cout << "\nName : " << name;
    cout << "\nRoll : " << roll;
    for (int x = 0; x < 5; x++)
      {
	cout << "\nMarks in " << x + 1 << " subject :" << marks[x];

      }
    cout << "\nPercentage is " << percent;
    cout << "\nGrade is " << grade;

  }
  int search(int ro)
  {
      if(roll==ro)
      {
        return true;     
      }
  }
};

int main ()
{
    int i,n,ro;
    bool flag=false;
    cout<<"\nEnter n";
    cin>>n;
  student s[n];
  for(i=0;i<n;i++)
  {
  s[i].input ();
  s[i].calculate ();
  s[i].grades ();
  s[i].display ();
    
  }
    cout<<"\nEnter roll number to search";
    cin>>ro;
  
  for(int x=0;x<n;x++)
  {
    flag=s[i].search(ro);
  }
    if(flag==true)
    {
        cout<<"Exist";
        //break;
    }
    else
    {
        cout<<"\nDoes not exist";
    }

  return 0;
}

