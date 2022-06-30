#include<iostream>
using namespace std;
#include<vector>
class Student
{
    public:
    int marks;
    string name;

};
//Bucket sort to sort an array of students
void bucket_sort(Student s[],int n)
{
    //Assume marks in rane 0 to 100
    vector<Student> v[101];
    //O(N) time
    for(int i=0;i<n;i++)
    {
        int m=s[i].marks;
        v[m].push_back(s[i]);
    }
            //Iterate over the vectors and print the student
        for(int i=100;i>=0;i--)
        {
            for(vector<Student>::iterator it=v[i].begin();it!=v[i].end();it++)  
            {   
                cout<<(*it).marks<<" "<<(*it).name<<endl;

            }

        }
}
int main()
{
    Student s[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].marks>>s[i].name;

    }
    bucket_sort(s,n);
    return 0;   
}
