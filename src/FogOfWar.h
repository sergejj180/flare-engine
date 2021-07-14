/*
Copyright © 2011-2012 Clint Bellanger
Copyright © 2012 Igor Paliychuk
Copyright © 2013 Henrik Andersson
Copyright © 2012-2016 Justin Jacobs

This file is part of FLARE.

FLARE is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.

FLARE is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
FLARE.  If not, see http://www.gnu.org/licenses/
*/

/**
 * class FogOfWar
 *
 * Contains logic and rendering routines for fog of war.
 */


#ifndef FOGOFWAR_H
#define FOGOFWAR_H

#include "CommonIncludes.h"
#include "MapCollision.h"
#include "TileSet.h"
#include "Utils.h"

class FogOfWar {
public:
	unsigned short layer_id;	
	std::string tileset;
	TileSet tset;
	bool isSet;

	void logic();
	int load();
	void handleIntramapTeleport();

	FogOfWar();
	~FogOfWar();
	
private:
	short start_x;
	short start_y;
	short end_x;
	short end_y;
	
	void calcBoundaries();
	void updateTiles(unsigned short sight_tile);
};

#endif
