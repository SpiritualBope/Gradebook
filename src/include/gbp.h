#ifndef gbp
#define gbp

#include <string>
#include <map>

template <typename V, typename V2>

class gradeBook {
    public:
        //char[] teacher;
        //std::map<char, int> students;
        std::string teacher;
        void viewGrades();
    private:
        char accessPassword;
};

void createGradeBook(
    char t[]
);
void gradeLoop(
    void x,
    gradeBook g
);

#endif