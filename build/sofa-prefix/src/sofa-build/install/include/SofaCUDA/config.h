/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2015 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                               SOFA :: Plugins                               *
*                                                                             *
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#ifndef SOFACUDA_CONFIG_H
#define SOFACUDA_CONFIG_H

#include <SofaBase/config.h>

#define SOFACUDA_MAJOR_VERSION 0
#define SOFACUDA_MINOR_VERSION 1

/* #undef SOFA_GPU_CUDPP */
#define SOFA_GPU_THRUST
/* #undef SOFA_GPU_CUDA_DOUBLE */
/* #undef SOFA_GPU_CUDA_DOUBLE_PRECISE */
/* #undef SOFA_GPU_CUBLAS */

#ifdef SOFA_BUILD_SOFACUDA
#  define SOFA_TARGET SofaCUDA
#  define SOFA_GPU_CUDA_API SOFA_EXPORT_DYNAMIC_LIBRARY
#else
#  define SOFA_GPU_CUDA_API SOFA_IMPORT_DYNAMIC_LIBRARY
#endif

#endif
