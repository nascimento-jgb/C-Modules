/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:16:15 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 10:54:57 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main()
{
	Base *base_ptr = generate();
	Base &base_ref = *base_ptr;

	identify(base_ptr);
	identify(base_ref);
	return 0;

	return (0);
}
