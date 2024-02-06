/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:21 by mneri             #+#    #+#             */
/*   Updated: 2024/02/06 15:57:14 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span
{
	private:
		unsigned int _N;
		unsigned int _pos;
		std::vector<int> _arr;
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void addNumber(int num);
		int shortestSpan(void);
		int longestSpan(void);
		void addNumbers(int quantity);
};