
//
//  Resource_Bundle.hpp
//  sqlLite
//
//  Created by <author> on 27/01/2021.
//
//

#ifndef ResourceBundle_hpp
#define ResourceBundle_hpp

#include <iostream>
#include <fstream>
#include <map>

class ResourceBundle {

public:

    std::map<std::string, std::string>* bundle;

    ResourceBundle(std::string path);
    ~ResourceBundle();

    std::map<std::string, std::string>* load(std::string path);
    void destroy();
    void modifyBundle(std::string path);

};


#endif /* ResourceBundle_hpp */
