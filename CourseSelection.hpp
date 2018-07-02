//
//  CourseSelection.hpp
//  CreditManagement
//
//  Created by Natalie Jin on 7/2/18.
//  Copyright © 2018 Natalie Jin. All rights reserved.
//

#ifndef CourseSelection_hpp
#define CourseSelection_hpp

#include <stdio.h>
#include "Student.hpp"
#include "Teacher.hpp"
#include <vector>

class CourseSelection {
    
private:
    Teacher teacher;
    std::vector<Student> students;
};

#endif /* CourseSelection_hpp */
