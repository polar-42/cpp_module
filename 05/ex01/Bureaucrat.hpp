/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:50:51 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 14:43:39 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <Form.hpp>

class Form;

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
		void signForm(Form& form);

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
