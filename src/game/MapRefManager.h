/*
 * Copyright (C) 2005-2008 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _MAPREFMANAGER
#define _MAPREFMANAGER

#include "Utilities/LinkedReference/RefManager.h"

class MapReference;

class MapRefManager : public RefManager<Map, Player>
{
    public:
        typedef LinkedListHead::Iterator< MapReference > iterator;

        MapReference* getFirst() const { return (MapReference*)RefManager<Map, Player>::getFirst(); }
        MapReference* getLast() const{ return (MapReference*)RefManager<Map, Player>::getLast(); }

        iterator begin() const { return iterator(getFirst()); }
        iterator end() const { return iterator(NULL); }
        iterator rbegin() const { return iterator(getLast()); }
        iterator rend() const { return iterator(NULL); }
};
#endif
