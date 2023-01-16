#include <iostream>
#include <string>
#include <vector>

 class AbstractSubject
  {
  protected:
    std::string Name;
    int CourseLength;
      std::string StartDate;

  public:
      AbstractSubject (std::string n, int c, std::string s):Name (n),
      CourseLength (c), StartDate (s)
    {
    }
    virtual void conductLecture () = 0;	// pure virtual function
    virtual void attendLecture (std::string student) = 0;	// pure virtual function
    std::string getName ()
    {
      return Name;
    }

    int getCourseLength ()
    {
      return CourseLength;
    }

    std::string getStartDate ()
    {
      return StartDate;
    }
  };

  class SkillWillSubject:public AbstractSubject
  {
  public:
    SkillWillSubject (std::string n, int c, std::string s):AbstractSubject (n, c, s)
    {
    }

    void conductLecture ()
    {
      std::cout << "The lecturer gives a lecture" << std::endl;
    }

    void attendLecture (std::string student)
    {
      std::cout << student << " attends lecture" << std::endl;
    }
  };

class AbstractLecturer
  {
  protected:
    std::string Name;
    int CourseLength;
      std::string StartDate;

  public:
      AbstractLecturer (std::string n, int c, std::string s):Name (n) ,
      CourseLength (c), StartDate (s)
    {
    }
    virtual void conductLecture () = 0;	// pure virtual function
    virtual void attendLecture (std::string student) = 0;	// pure virtual function
    std::string getName ()
    {
      return Name;
    }

    int getCourseLength ()
    {
      return CourseLength;
    }

    std::string getStartDate ()
    {
      return StartDate;
    }
  };

  class SkillWillLecturer :public AbstractLecturer
  {
  public:
    SkillWillLecturer (std::string n, int c, std::string s):AbstractLecturer (n, c, s)
    {
    }

    void conductLecture ()
    {
      std::cout << "The lecturer gives a lecture" << std::endl;
    }

    void attendLecture (std::string student)
    {
      std::cout << student << " attends lecture" << std::endl;
    }
  };
  

class AbstractStudent
  {
  protected:
    std::string Name;
    int CourseLength;
      std::string StartDate;

  public:
      AbstractStudent (std::string n, int c, std::string s):Name (n) ,
      CourseLength (c), StartDate (s)
    {
    }
    virtual void conductLecture () = 0;	// pure virtual function
    virtual void attendLecture (std::string student) = 0;	// pure virtual function
    std::string getName ()
    {
      return Name;
    }

    int getCourseLength ()
    {
      return CourseLength;
    }

    std::string getStartDate ()
    {
      return StartDate;
    }
  };

  class SkillWillStudent:public AbstractStudent
  {
  public:
    SkillWillStudent (std::string n, int c, std::string s):AbstractStudent (n, c, s)
    {
    }

    void conductLecture ()
    {
      std::cout << "The lecturer gives a lecture" << std::endl;
    }

    void attendLecture (std::string student)
    {
      std::cout << student << " attends lecture" << std::endl;
    }
  };

int main() {
   
   SkillWillStudent Sandro("Sandro Kandelaki", 12, "01/01/2022");
     SkillWillLecturer Saba("Saba Okhanashvili", 10, "09/30/2021");
    }





