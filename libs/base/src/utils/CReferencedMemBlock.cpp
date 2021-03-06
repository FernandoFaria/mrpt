/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2014, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#include <mrpt/base.h>  // Precompiled headers



#include <mrpt/utils/CReferencedMemBlock.h>

using namespace mrpt::utils;

/*---------------------------------------------------------------
						constructor
---------------------------------------------------------------*/
CReferencedMemBlock::CReferencedMemBlock(size_t mem_block_size) :
	stlplus::smart_ptr<vector_byte>( new vector_byte(mem_block_size) )
{
}

CReferencedMemBlock::~CReferencedMemBlock()
{
}

/*---------------------------------------------------------------
						resize
---------------------------------------------------------------*/
void CReferencedMemBlock::resize(size_t mem_block_size)
{
	this->operator ->()->resize(mem_block_size);
}

