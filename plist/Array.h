/*
 * Array.h
 * Array node type for C++ binding
 *
 * Copyright (c) 2009 Jonathan Beck All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef PLIST__ARRAY_H
#define PLIST__ARRAY_H

#include "Structure.h"
#include <vector>

namespace PList
{

class Array : public Structure
{
public :
    Array(Node* parent = NULL);
    Array(plist_t node, Node* parent = NULL);
    Array(Array& a);
    Array& operator=(Array& a);
    virtual ~Array();

    Node* Clone();

    Node* operator[](unsigned int index);
    void Append(Node* node);
    void Insert(Node* node, unsigned int pos);
    void Remove(Node* node);
    void Remove(unsigned int pos);
    unsigned int GetNodeIndex(Node* node);

private :
    std::vector<Node*> _array;
};

};

#endif // PLIST__ARRAY_H
