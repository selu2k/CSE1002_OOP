#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

struct Person
{
    int adhaar;
    string name;
    int age;
    char gender;
};

bool sortByName(const Person &lhs, const Person &rhs)
{
    return lhs.name < rhs.name;
}
bool sortByadhaar(const Person &lhs, const Person &rhs)
{
    return lhs.adhaar < rhs.adhaar;
}
int main()
{
    int n, i, count = 0;
    cout << "Num of people" << endl;
    cin >> n;
    vector<Person> v(n);
    for (vector<Person>::size_type i = 0; i != n; ++i)
    {
        //cout << "adhaar no." << endl;
        cin >> v[i].adhaar;
        //cout << "Name" << endl;
        cin >> v[i].name;
        //cout << "Age" << endl;
        cin >> v[i].age;
        //cout << "Gender" << endl;
        cin >> v[i].gender;
    }
    //cout << endl;
    //cout << "Sorting 1" << endl;
    //cout << endl;

    sort(v.begin(), v.end(), sortByName);
    for (i = 0; i < v.size(); i++)
    {
        string s = v[i].name;
        if (s[0] != 'A' && s[0] != 'E' && s[0] != 'I' && s[0] != 'O' && s[0] != 'U')
        {
            cout << s << endl;
            count = 1;
        }
        else
            count = 0;
    }
    // cout << endl;
    //cout << "Sorting 2" << endl;
    //cout << endl;
    sort(v.begin(), v.end(), sortByadhaar);

    for (i = 0; i < v.size(); i++)
    {
        string s = to_string(v[i].adhaar);
        if (s[0] != '1')
        {
            cout << v[i].name << endl;
            count = 1;
        }
        else
            count = 0;
    }
    if (count == 0)
        cout << "No Match Found" << endl;
    return 0;
}