//    This is the source code for BiFit version 0.2
//    BiFit simulates secondary contacts between two taxa (or species,
//    depending on your favorite species definition).
//    The software outputs introgression statistics for autosomal,
//    gonosomal and mitochondrial markers. Processes considered include
//    spatial structure with isolation by distance, multi-locus local adaptation,
//    reduced hybrid survival, recombination, mitochondrial selection,
//    sex-specific dispersal, sex-specific hybrid survival,
//    spatial invasion and many others.
//
//	  Copyright (C) 2012-2016  Timoth�e Bonnet - timothee.bonnet@ieu.uzh.ch
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

#ifndef CDEMES_H_INCLUDED
#define CDEMES_H_INCLUDED

#include "Ccouples.h"
#include <vector>

class Cdemes
{public:
Cdemes();
std::vector<Ccouples> Couples;//Contient DemeSize couples
short int habitat;//0 ou 1

};

#endif // CDEMES_H_INCLUDED
