/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:06:25 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/06/19 15:54:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form();
		Form(std::string _name, int gradeToSign, int gradeToExecute);
		Form(const Form &src);
		Form& operator=(const Form &src);
		~Form();

		const std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool isSigned() const;

		void beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too high to sign form");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too low to sign form");
				}
		};

		class FormIsAlreadySign : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("This form is already sign");
				}
		};
};

std::ostream &operator<<(std::ostream &i, Form const &src);

#endif
