#include<iostream>

using namespace std;
template<typename t>
t mymax(t x,t y){
    return (x>y)?x:y;
}
template<class a, class b>
class hello
{
    private:
        a d1;
        b d2;

    public:

    void setdata()
    {
        cin >> d1 >> d2;
    }

    void add()
    {
        cout << d1 + d2<<endl;
    }
};

int main()
{
    hello<int,int> c1;

    c1.setdata();

    c1.add();
     cout<< mymax<int>(2,8)<<endl;
     cout<< mymax<char>('r','j')<<endl;
    return 0;
}