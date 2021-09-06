//
// Created by chep on 4/9/21.
//

#pragma once


#include <vector>
#include <string>

class FileUtils
{
public:
    static std::vector<std::string> getFilesIn(const std::string path, const std::string extension);
};

