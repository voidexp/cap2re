/* 
 * Copyright (C) 2011 Ivan Nikolaev
 *
 * This file is part of cap2re.
 *
 * cap2re is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * cap2re is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details. 
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with cap2re. 
 * If not, see http://www.gnu.org/licenses
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <boost/regex.hpp>
using namespace std;

#include "ConfigOptsTree.h"
#include "CameraManager.h"
#include "Gphoto2CameraManager.h"

int main()
{
    CameraManager *camMgr = new Gphoto2CameraManager;
    for(auto cam: camMgr->detectCameras())
    {
        cout << "Exposure time:" << cam->getExposureTime() << endl;
        cout << "Aperture: " << cam->getApertureSize() << endl;
        String out = cam->capture(".");
        cout << "Image saved in: " << out << endl;
    }

    delete camMgr;
    return 0;
}
