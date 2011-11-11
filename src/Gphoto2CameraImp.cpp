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

#include "Gphoto2CameraImp.h"

Gphoto2CameraImp::Gphoto2CameraImp(gphoto2::Camera *gp2Cam, gphoto2::GPContext *gp2Context):
    _camera(gp2Cam),
    _context(gp2Context)
{
    gp_camera_get_abilities(_camera, &_abilities);
}

Gphoto2CameraImp::~Gphoto2CameraImp()
{
    gp_camera_unref(_camera);
}

String
Gphoto2CameraImp::capture()
{
    //TODO
}

void
Gphoto2CameraImp::setOption(const String &path, const String &value)
{
    //TODO
}

String
Gphoto2CameraImp::getOption(const String &path) const
{
    //TDOO
}

StringList
Gphoto2CameraImp::getOptionValues(const String &path) const
{
    //TODO
}
