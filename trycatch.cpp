#include <iostream>
#include <cstring>
using namespace std;

class Error
{
    int err_code;
    char *err_desc;

public:
    Error(int c, const char *d)
    {
        err_code = c;
        err_desc = new char[strlen(d) + 1];
        strcpy(err_desc, d);
    }

  

    ~Error()
    {
        delete[] err_desc;
    }

    void err_display() const
    {
        cout << "\nError Code: " << err_code;
        cout << "\nError Description: " << err_desc;
    }
};

int main()
{
    try
    {
        cout << "Press any key to throw a test exception.";
       // cin.get();

        throw Error(99, "Test Exception");
    }
    catch (const Error& e)
    {
        cout << "\nException caught successfully.";
        e.err_display();
    }

    return 0;
}