/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:14:23 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/11 14:25:37 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
	Data men;

	men.age = 45;
	men.name = "falfoul";

	std::cout << "name: " << men.name << " age: " << men.age << std::endl;
	std::cout << "address of Data: " << &men << std::endl;
	std::cout << "address as int: " << Serializer::serialize(&men) << std::endl;
	std::cout << "address as normal form: " << Serializer::deserialize(Serializer::serialize(&men)) << std::endl;
}
