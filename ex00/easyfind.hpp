/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:14:37 by mneri             #+#    #+#             */
/*   Updated: 2024/02/06 15:37:48 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &elem, int n)
{
    typename T::iterator value = std::find(elem.begin(), elem.end(), n);
    if (value != elem.end())
        return value;
    else
    {
        throw std::out_of_range("Element not found");
    }
}