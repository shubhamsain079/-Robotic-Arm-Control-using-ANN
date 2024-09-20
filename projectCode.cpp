#include <bits/stdc++.h>
using namespace std;

int main()
{

  double q1, q2, q3, q4;
  double dx, dy, dz;
  double a[625];
  double b[625];

  int i;
  int k = 0, l = 0, m = 0, n = 0;

  dx = (cos(q1 * (M_PI / 180)) * (12 * cos(q2 * (M_PI / 180)) + 9 * cos((q2 + q3) * (M_PI / 180)))) + (9 * cos(q1 * (M_PI / 180)) * cos((q2 + q3 + q4) * (M_PI / 180)));

  dy = (sin(q1 * (M_PI / 180)) * (12 * cos(q2 * (M_PI / 180)) + 9 * cos((q2 + q3) * (M_PI / 180)))) + (9 * sin(q1 * (M_PI / 180)) * cos((q2 + q3 + q4) * (M_PI / 180)));

  dz = (11.5 + (12 * sin(q2 * (M_PI / 180)) + 9 * sin((q2 + q3) * (M_PI / 180)))) + (9 * sin((q2 + q3 + q4) * (M_PI / 180)));

  for (int q1 = 0; q1 < 100; q1 += 20)
  {
    // cout << q1 * (M_PI / 180) << endl;

    for (int q2 = 0; q2 < 100; q2 += 20)
    {
      // cout<<"The value of q2 is \n"<<endl;

      for (int q3 = 0; q3 < 100; q3 += 20)
      {
        // cout<<"The value of q3 is \n"<<endl;

        for (int q4 = 0; q4 < 100; q4 += 20)
        {

          // a[k++]= q4 * (M_PI / 180);

          // cout<<"The value of q1 is"<<endl;
          // cout << q1 * (M_PI / 180) << endl;

          // cout<<"The value of q2 is"<<endl;
          // cout << q2 * (M_PI / 180) << endl;

          // cout<<"The value of q3 is"<<endl;
          // cout << q3 * (M_PI / 180) << endl;

          // cout<<"The value of q4 is"<<endl;
          // cout << q4 * (M_PI / 180) << endl;

          // cout << "These are Four angle in radain" << endl;

          // cout<<dx<<endl;
          //  cout<<dy<<endl;
          //  cout<<dz<<endl;
          // b[l++]=(cos(q1*(M_PI/180))*(12*cos(q2*(M_PI/180))+ 9*cos((q2+q3)*(M_PI/180)))) + (9*cos(q1*(M_PI/180))*cos((q2+q3+q4)*(M_PI/180)));
          // b[l++]= (sin(q1*(M_PI/180))*(12*cos(q2*(M_PI/180))+ 9*cos((q2+q3)*(M_PI/180)))) + (9*sin(q1*(M_PI/180))*cos((q2+q3+q4)*(M_PI/180)));
          // b[l++]= (11.5+(12*sin(q2*(M_PI/180))+ 9*sin((q2+q3)*(M_PI/180)))) + (9*sin((q2+q3+q4)*(M_PI/180)));

          // cout<<"These are Three coordinate of EE"<<endl;
        }
      }
    }
  }

  // for (int i = 0; i < 625; i++)
  // {
  //   /* code */
  //   cout<<b[i]<<endl;
  // }
  /*for (int i = 0; i < 625; i++)
{

  a[i]=a[i+1]-a[i];
}
for (int i = 0; i < 625; i++)
{

  b[i]=b[i+1]-b[i];
}
  for (int i = 0; i < 625; i++)
{

  cout<<b[i]/a[i]<<endl;
}*/

  return 0;
}