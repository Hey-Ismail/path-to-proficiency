#include <bits/stdc++.h>
using namespace std;

class Student {
   private:
    int age;
    string first_name;
    string last_name;
    int standard;

   public:
    void set_age(int a) {
        age = a;
    }

    void set_first_name(string fn) {
        first_name = fn;
    }

    void set_last_name(string ln) {
        last_name = ln;
    }

    void set_standard(int s) {
        standard = s;
    }

    int get_age() {
        return age;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    int get_standard() {
        return standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    // cout << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << endl;
    cout << st.get_age() << "," << st.get_first_name() << "," << st.get_last_name() << "," << st.get_standard();

    return 0;
}