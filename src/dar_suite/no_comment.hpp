/*********************************************************************/
// dar - disk archive - a backup/restoration program
// Copyright (C) 2002-2018 Denis Corbin
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//
// to contact the author : http://dar.linux.free.fr/email.html
/*********************************************************************/

    /// \file no_comment.hpp
    /// \brief contains class that transparently strips out the comments from configuration file
    /// \ingroup CMDLINE



#ifndef NO_COMMENT_HPP
#define NO_COMMENT_HPP

#include "../my_config.h"
#include "hide_file.hpp"


    /// \addtogroup CMDLINE
    /// @{

class no_comment : public hide_file
{
public:
    no_comment(libdar::generic_file & f) : hide_file(f) {};
    no_comment(const no_comment & ref) = default;
    no_comment & operator = (const no_comment & ref) = default;
    ~no_comment() = default;

protected:
    virtual void fill_morceau() override;
};

    // @}

#endif
