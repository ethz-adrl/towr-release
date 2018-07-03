/******************************************************************************
Copyright (c) 2018, Alexander W. Winkler. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of the copyright holder nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

#ifndef TOWR_TOWR_ROS_INCLUDE_TOWR_ROS_ANYMAL_MODEL_H_
#define TOWR_TOWR_ROS_INCLUDE_TOWR_ROS_ANYMAL_MODEL_H_

#include <towr/models/kinematic_model.h>
#include <towr/models/centroidal_model.h>

namespace towr {

class AnymalKinematicModel : public KinematicModel {
public:
  AnymalKinematicModel ();
};


class AnymalDynamicModel : public CentroidalModel {
public:

  // ANYmal bear
  AnymalDynamicModel()
  : CentroidalModel(29.5,
                    0.946438, 1.94478, 2.01835, 0.000938112, -0.00595386, -0.00146328,
                    4) {}
  // ANYmal beth
//  : CentroidalModel(36.5,
//                    1.11117, 2.20775, 2.02077, 0.00943193, 0.0101473, 0.00124553,
//                    4) {}
};

} // namespace towr


#endif /* TOWR_TOWR_ROS_INCLUDE_TOWR_ROS_ANYMAL_MODEL_H_ */
