########################################################################
##
## Copyright (C) 2012-2023 The Octave Project Developers
##
## See the file COPYRIGHT.md in the top-level directory of this
## distribution or <https://octave.org/copyright/>.
##
## This file is part of Octave.
##
## Octave is free software: you can redistribute it and/or modify it
## under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## Octave is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with Octave; see the file COPYING.  If not, see
## <https://www.gnu.org/licenses/>.
##
########################################################################

## -*- texinfo -*-
## @cindex error ids
##
## @table @code
## @item Octave:bad-alloc
## Indicates that memory couldn't be allocated.
##
## @item Octave:invalid-context
## Indicates the error was generated by an operation that cannot be executed in
## the scope from which it was called.  For example, the function
## @code{print_usage ()} when called from the Octave prompt raises this error.
##
## @item Octave:invalid-fun-call
## Indicates that a function was called in an incorrect way, e.g., wrong number
## of input arguments.
##
## @item Octave:invalid-indexing
## Indicates that a data-type was indexed incorrectly, e.g., real-value index
## for arrays, nonexistent field of a structure.
##
## @item Octave:invalid-input-arg
## Indicates that a function was called with invalid input arguments.
##
## @item Octave:undefined-function
## Indicates a call to a function that is not defined.  The function may exist
## but Octave is unable to find it in the search path.
##
## @end table
##

function error_ids ()
  help ("error_ids");
endfunction


## Mark file as being tested.  No real test needed for a documentation .m file
%!assert (1)
