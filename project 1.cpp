#include <iostream>

using namespace std;
struct student
{
   string  name;
   int roll;
   int age;
   int marks[5];

};

void  input(student x[],int n)
{
  for (int i=0;i<n;i++)
  {
      cin >> x[i].name >> x[i].roll >> x[i].age;
      for (int j=0;j<5;j++)
      {
          cin >> x[i].marks[j];
      }
  }

  }
  void output(student x[],int n)
  {

  for (int i=0;i<n;i++)
  {
      cout << x[i].name << x[i].roll << x[i].age;

  for(int j=0;j<5;j++)
  {
      cout << x[i].marks[j];
  }
  }
  }
  void print(student x[],int n)
  {

     for(int i=0;i<n;i++)
     {

         if(x[i].age==14)
         {
             cout << x[i].name;
         }

     }
  }

     void evenroll(student x[],int n)
     {
       for(int i=0;i<n;i++)
        {
            if(x[i].roll%2==0)
            {
                cout << x[i].name;
            }
        }
     }
     void printdetails(student x[],int n, int num)
     {
         for (int i=0;i<n;i++)
         {
             if (x[i].roll==num)
             {
                cout << x[i].name;
                cout << x[i].age;
             }

         }


     }

     void firotfive(student x[],int n)
     {
         for (int j=0;j<5;j++)
         {
             int max=0;
             for (int i=0;i<n;i++)
             {

                 if (x[i].marks[j]>x[max].marks[j])
                 {
                    max=i;

                 }
             }
             cout << x[max].name;

         }

     }




int main()
{
   student x[15];
   input(x,15);
   output(x,15);
   print(x,15);
   evenroll(x,15);
   printdetails(x,15,101);
   firotfive(x,15);




}
