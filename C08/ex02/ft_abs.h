/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/30 22:29:35 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/03/31 02:38:24 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

// if turnery was allowed, we could say:
// # define ABSD(Value) ((Value) >= 0 ? (Value) : -(Value))
# define ABS(Value) (((Value) < 0) * (-(Value)) + ((Value) >= 0) * (Value))

#endif