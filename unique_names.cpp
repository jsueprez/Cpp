#include <bits/stdc++.h>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string> unique_list = names1;

    unique_list.insert(unique_list.end(), names2.begin(), names2.end());

    std::set<std::string> s(unique_list.begin(), unique_list.end());

    unique_list.assign( s.begin(), s.end() );
    return unique_list;
}

/*

    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};

    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }

    */
