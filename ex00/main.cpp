/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:14:40 by mneri             #+#    #+#             */
/*   Updated: 2024/01/31 17:17:44 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main(void)
{
    std::vector<int> arr;

    try
    {
        arr.push_back(10);
        arr.push_back(20);
        std::vector<int>::iterator find = easyfind(arr, 20);
        std::cout << "Found number " << *find << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::vector<int> arr2(10, -1);
        std::vector<int>::iterator find = easyfind(arr2, 3);
        std::cout << "Found number " << *find << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}