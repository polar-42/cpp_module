/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:01:14 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/24 15:32:56 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERNE_HPP

# include <AForm.hpp>

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &src);
		Intern& operator=(const Intern &src);
		~Intern();

		AForm* makeForm(std::string name, std::string target);
};

#endif
