/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:24 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/10 16:50:17 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <aio.h>

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif
