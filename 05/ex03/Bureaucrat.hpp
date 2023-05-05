/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:50:51 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/24 15:29:50 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <AForm.hpp>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int		_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat & src);
		~Bureaucrat();

		void	operator++();
		void	operator--();

		std::string getName() const;
		int	getGrade() const;
		void signForm(AForm& form);
		void executeForm(AForm const &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
};

std::ostream & operator<<(std::ostream &i, Bureaucrat const &src);

#endif
