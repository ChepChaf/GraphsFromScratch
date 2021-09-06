//
// Created by chep on 4/9/21.
//

#include <filesystem>
#include "FileUtils.h"

namespace fs = std::filesystem;

std::vector<std::string> FileUtils::getFilesIn(const std::string path, const std::string extension)
{
    std::vector<std::string> files;

    for (const auto& entry : fs::directory_iterator(path))
    {
        std::string path = entry.path();
        if (path.ends_with(extension))
        {
            files.push_back(path);
        }
    }

    return files;
}
