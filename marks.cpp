#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> marks;

    int n, x;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks:\n";

    for(int i=0; i<n; i++)
    {
        cin >> x;
        marks.push_back(x);
    }

    // Display marks

    cout << "\nAll Marks:\n";

    vector<int>::iterator itr;

    for(itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout <<*itr << " ";
    }

    // Sorting marks

    sort(marks.begin(), marks.end());

    cout << "\n\nMarks in Ascending Order:\n";

    for(auto m : marks)
    {
        cout << m << " ";
    }

    // Count passed students

    int passed = count_if(marks.begin(), marks.end(),
                          [](int m)
                          {
                              return m > 50;
                          });

    cout << "\n\nNumber of Passed Students = "
         << passed;

    return 0;
}