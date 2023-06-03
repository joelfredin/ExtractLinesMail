// This code includes Boost library example code
// Original example: https://www.boost.org/doc/libs/1_82_0/more/getting_started/unix-variants.html
// Copyright (c) 2023 Boost Authors

#include"boost/regex.hpp"
#include<iostream>
#include<string>

int main()
{
    std::string line;
    boost::regex pat("^From: (Re: |Aw: )*(.*)");

    while(std::cin)
    {
        std::getline(std::cin, line);
        boost::smatch matches;
        if(boost::regex_match(line, matches, pat))
        {
            std::cout << matches[2] << std::endl;
        }
    }

    return 0;
}
