#include <iostream>
#include <sstream>
using namespace std;
//creates a class named Student
class Student {
    //private variables, using data hiding
    private:
        int age; 
        string first_name; 
        string last_name;
        int standard; 
    public:
        //Setter of age
        void set_age(int a) {
            age = a;
        }
        //Getter
        int get_age(){
            return age;
        }
        //setter
        void set_first_name(string new_first_name) {
            first_name = new_first_name;
        }
        //geter
        string get_first_name() {
            return first_name;
        }
        //setter
        void set_last_name(string new_last_name) {
            last_name = new_last_name;
        }
        //getter
        string get_last_name() {
            return last_name;
        }
        //setter
        void set_standard(int new_standard) {
            standard = new_standard;
        }
        //getter
        int get_standard() {
            return standard;
        }
    //process the input into a string
    string to_string()
    {
        //used to operate on strings
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
};

int main() {
    //initionalizeing varaibles
    int age, standard;
    string first_name, last_name;
    
    //Input of data
    cin >> age >> first_name >> last_name >> standard;
    //Student object instance    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    //Output of Data
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    //uses the string class to print out student class object instance
    cout << st.to_string();
    
    return 0;
}
