/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:24 by mneri             #+#    #+#             */
/*   Updated: 2024/02/06 15:57:21 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _pos(0)
{
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
	*this = other;
}


void Span::addNumber(int num)
{
	if(this->_pos == (size_t)_N)
		throw std::exception();
    this->_arr.push_back(num);
	_pos++;
}

int Span::longestSpan()
{
	if(this->_arr.begin() == this->_arr.end() || _pos == 1)
		throw std::exception();
	int min = INT_MAX;
	int max = INT_MIN;

	for (size_t i = 1; i < this->_arr.size(); ++i)
    {
        if (this->_arr[i] < min)
            min = this->_arr[i];
        else if (this->_arr[i] > max)
            max = this->_arr[i];
    }
	return (max - min);
}

int Span::shortestSpan()
{
	if(this->_arr.begin() == this->_arr.end() || _pos == 1)
        throw std::exception();

    std::sort(this->_arr.begin(), this->_arr.begin() + this->_pos); 
    int minSpan = INT_MAX;

    for (size_t i = 1; i < this->_pos; ++i)
    {
        int span = this->_arr[i] - this->_arr[i - 1]; 
        if (span < minSpan)
            minSpan = span; 
    }

    return minSpan; 
}

void Span::addNumbers(int quantity)
{
	int num;

	for(int i = 0; i < quantity; i++)
	{
		num = rand();
   		this->_arr.push_back(num);
	}
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return *this;
	return *this;
}