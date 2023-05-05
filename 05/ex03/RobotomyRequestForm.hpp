/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:29:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 17:53:10 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <AForm.hpp>
# include <Bureaucrat.hpp>
# include <cstdlib>

class RobotomyRequestForm : public virtual AForm
{
	private:
		const std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &src);
		~RobotomyRequestForm();

		const std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif