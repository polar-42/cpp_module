/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:06:25 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 17:52:21 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{
	protected:
		const std::string 	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm();
		AForm(std::string _name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &src);
		AForm& operator=(const AForm &src);
		virtual ~AForm();

		const std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool isSigned() const;
		
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
};

std::ostream &operator<<(std::ostream &i, AForm const &src);

#endif