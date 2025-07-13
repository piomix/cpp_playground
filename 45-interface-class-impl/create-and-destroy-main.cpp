#include <format>
#include <iostream>
#include "CreateAndDestroy.h"


void create();

const CreateAndDestroy o1{1, "(global object)"};

int main(){
    std::cout << "Main BEGINS...\n" << std::endl;
    
    const CreateAndDestroy o2{2, "(object from main)"};
    static const CreateAndDestroy o3{3, "(static object from main)"};
    
    create();
    
    std::cout << "Main RESUMES...\n" << std::endl;
    
    const CreateAndDestroy o4{4, "(object from main)"};
    
    std::cout << "Main ENDS...\n" << std::endl;
}

void create(){
    
    std::cout << "create() BEGINS...\n" << std::endl;
    const CreateAndDestroy o5{5, "(object from create )"};
    static const CreateAndDestroy o6{6, "(static object from create )"};
    const CreateAndDestroy o7{7, "(object from create )"};
           
    std::cout << "create() ENDs...\n" << std::endl;
}