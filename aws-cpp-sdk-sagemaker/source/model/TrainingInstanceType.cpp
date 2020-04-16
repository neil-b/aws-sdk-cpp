﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TrainingInstanceTypeMapper
      {

        static const int ml_m4_xlarge_HASH = HashingUtils::HashString("ml.m4.xlarge");
        static const int ml_m4_2xlarge_HASH = HashingUtils::HashString("ml.m4.2xlarge");
        static const int ml_m4_4xlarge_HASH = HashingUtils::HashString("ml.m4.4xlarge");
        static const int ml_m4_10xlarge_HASH = HashingUtils::HashString("ml.m4.10xlarge");
        static const int ml_m4_16xlarge_HASH = HashingUtils::HashString("ml.m4.16xlarge");
        static const int ml_g4dn_xlarge_HASH = HashingUtils::HashString("ml.g4dn.xlarge");
        static const int ml_g4dn_2xlarge_HASH = HashingUtils::HashString("ml.g4dn.2xlarge");
        static const int ml_g4dn_4xlarge_HASH = HashingUtils::HashString("ml.g4dn.4xlarge");
        static const int ml_g4dn_8xlarge_HASH = HashingUtils::HashString("ml.g4dn.8xlarge");
        static const int ml_g4dn_12xlarge_HASH = HashingUtils::HashString("ml.g4dn.12xlarge");
        static const int ml_g4dn_16xlarge_HASH = HashingUtils::HashString("ml.g4dn.16xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_c4_xlarge_HASH = HashingUtils::HashString("ml.c4.xlarge");
        static const int ml_c4_2xlarge_HASH = HashingUtils::HashString("ml.c4.2xlarge");
        static const int ml_c4_4xlarge_HASH = HashingUtils::HashString("ml.c4.4xlarge");
        static const int ml_c4_8xlarge_HASH = HashingUtils::HashString("ml.c4.8xlarge");
        static const int ml_p2_xlarge_HASH = HashingUtils::HashString("ml.p2.xlarge");
        static const int ml_p2_8xlarge_HASH = HashingUtils::HashString("ml.p2.8xlarge");
        static const int ml_p2_16xlarge_HASH = HashingUtils::HashString("ml.p2.16xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_p3_8xlarge_HASH = HashingUtils::HashString("ml.p3.8xlarge");
        static const int ml_p3_16xlarge_HASH = HashingUtils::HashString("ml.p3.16xlarge");
        static const int ml_p3dn_24xlarge_HASH = HashingUtils::HashString("ml.p3dn.24xlarge");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_c5n_xlarge_HASH = HashingUtils::HashString("ml.c5n.xlarge");
        static const int ml_c5n_2xlarge_HASH = HashingUtils::HashString("ml.c5n.2xlarge");
        static const int ml_c5n_4xlarge_HASH = HashingUtils::HashString("ml.c5n.4xlarge");
        static const int ml_c5n_9xlarge_HASH = HashingUtils::HashString("ml.c5n.9xlarge");
        static const int ml_c5n_18xlarge_HASH = HashingUtils::HashString("ml.c5n.18xlarge");


        TrainingInstanceType GetTrainingInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_m4_xlarge_HASH)
          {
            return TrainingInstanceType::ml_m4_xlarge;
          }
          else if (hashCode == ml_m4_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_m4_2xlarge;
          }
          else if (hashCode == ml_m4_4xlarge_HASH)
          {
            return TrainingInstanceType::ml_m4_4xlarge;
          }
          else if (hashCode == ml_m4_10xlarge_HASH)
          {
            return TrainingInstanceType::ml_m4_10xlarge;
          }
          else if (hashCode == ml_m4_16xlarge_HASH)
          {
            return TrainingInstanceType::ml_m4_16xlarge;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            return TrainingInstanceType::ml_g4dn_xlarge;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_g4dn_2xlarge;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            return TrainingInstanceType::ml_g4dn_4xlarge;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            return TrainingInstanceType::ml_g4dn_8xlarge;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            return TrainingInstanceType::ml_g4dn_12xlarge;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            return TrainingInstanceType::ml_g4dn_16xlarge;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            return TrainingInstanceType::ml_m5_large;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            return TrainingInstanceType::ml_m5_xlarge;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_m5_2xlarge;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            return TrainingInstanceType::ml_m5_4xlarge;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            return TrainingInstanceType::ml_m5_12xlarge;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            return TrainingInstanceType::ml_m5_24xlarge;
          }
          else if (hashCode == ml_c4_xlarge_HASH)
          {
            return TrainingInstanceType::ml_c4_xlarge;
          }
          else if (hashCode == ml_c4_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_c4_2xlarge;
          }
          else if (hashCode == ml_c4_4xlarge_HASH)
          {
            return TrainingInstanceType::ml_c4_4xlarge;
          }
          else if (hashCode == ml_c4_8xlarge_HASH)
          {
            return TrainingInstanceType::ml_c4_8xlarge;
          }
          else if (hashCode == ml_p2_xlarge_HASH)
          {
            return TrainingInstanceType::ml_p2_xlarge;
          }
          else if (hashCode == ml_p2_8xlarge_HASH)
          {
            return TrainingInstanceType::ml_p2_8xlarge;
          }
          else if (hashCode == ml_p2_16xlarge_HASH)
          {
            return TrainingInstanceType::ml_p2_16xlarge;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_p3_2xlarge;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            return TrainingInstanceType::ml_p3_8xlarge;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            return TrainingInstanceType::ml_p3_16xlarge;
          }
          else if (hashCode == ml_p3dn_24xlarge_HASH)
          {
            return TrainingInstanceType::ml_p3dn_24xlarge;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5_4xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5_18xlarge;
          }
          else if (hashCode == ml_c5n_xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5n_xlarge;
          }
          else if (hashCode == ml_c5n_2xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5n_2xlarge;
          }
          else if (hashCode == ml_c5n_4xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5n_4xlarge;
          }
          else if (hashCode == ml_c5n_9xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5n_9xlarge;
          }
          else if (hashCode == ml_c5n_18xlarge_HASH)
          {
            return TrainingInstanceType::ml_c5n_18xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingInstanceType>(hashCode);
          }

          return TrainingInstanceType::NOT_SET;
        }

        Aws::String GetNameForTrainingInstanceType(TrainingInstanceType enumValue)
        {
          switch(enumValue)
          {
          case TrainingInstanceType::ml_m4_xlarge:
            return "ml.m4.xlarge";
          case TrainingInstanceType::ml_m4_2xlarge:
            return "ml.m4.2xlarge";
          case TrainingInstanceType::ml_m4_4xlarge:
            return "ml.m4.4xlarge";
          case TrainingInstanceType::ml_m4_10xlarge:
            return "ml.m4.10xlarge";
          case TrainingInstanceType::ml_m4_16xlarge:
            return "ml.m4.16xlarge";
          case TrainingInstanceType::ml_g4dn_xlarge:
            return "ml.g4dn.xlarge";
          case TrainingInstanceType::ml_g4dn_2xlarge:
            return "ml.g4dn.2xlarge";
          case TrainingInstanceType::ml_g4dn_4xlarge:
            return "ml.g4dn.4xlarge";
          case TrainingInstanceType::ml_g4dn_8xlarge:
            return "ml.g4dn.8xlarge";
          case TrainingInstanceType::ml_g4dn_12xlarge:
            return "ml.g4dn.12xlarge";
          case TrainingInstanceType::ml_g4dn_16xlarge:
            return "ml.g4dn.16xlarge";
          case TrainingInstanceType::ml_m5_large:
            return "ml.m5.large";
          case TrainingInstanceType::ml_m5_xlarge:
            return "ml.m5.xlarge";
          case TrainingInstanceType::ml_m5_2xlarge:
            return "ml.m5.2xlarge";
          case TrainingInstanceType::ml_m5_4xlarge:
            return "ml.m5.4xlarge";
          case TrainingInstanceType::ml_m5_12xlarge:
            return "ml.m5.12xlarge";
          case TrainingInstanceType::ml_m5_24xlarge:
            return "ml.m5.24xlarge";
          case TrainingInstanceType::ml_c4_xlarge:
            return "ml.c4.xlarge";
          case TrainingInstanceType::ml_c4_2xlarge:
            return "ml.c4.2xlarge";
          case TrainingInstanceType::ml_c4_4xlarge:
            return "ml.c4.4xlarge";
          case TrainingInstanceType::ml_c4_8xlarge:
            return "ml.c4.8xlarge";
          case TrainingInstanceType::ml_p2_xlarge:
            return "ml.p2.xlarge";
          case TrainingInstanceType::ml_p2_8xlarge:
            return "ml.p2.8xlarge";
          case TrainingInstanceType::ml_p2_16xlarge:
            return "ml.p2.16xlarge";
          case TrainingInstanceType::ml_p3_2xlarge:
            return "ml.p3.2xlarge";
          case TrainingInstanceType::ml_p3_8xlarge:
            return "ml.p3.8xlarge";
          case TrainingInstanceType::ml_p3_16xlarge:
            return "ml.p3.16xlarge";
          case TrainingInstanceType::ml_p3dn_24xlarge:
            return "ml.p3dn.24xlarge";
          case TrainingInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case TrainingInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case TrainingInstanceType::ml_c5_4xlarge:
            return "ml.c5.4xlarge";
          case TrainingInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case TrainingInstanceType::ml_c5_18xlarge:
            return "ml.c5.18xlarge";
          case TrainingInstanceType::ml_c5n_xlarge:
            return "ml.c5n.xlarge";
          case TrainingInstanceType::ml_c5n_2xlarge:
            return "ml.c5n.2xlarge";
          case TrainingInstanceType::ml_c5n_4xlarge:
            return "ml.c5n.4xlarge";
          case TrainingInstanceType::ml_c5n_9xlarge:
            return "ml.c5n.9xlarge";
          case TrainingInstanceType::ml_c5n_18xlarge:
            return "ml.c5n.18xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
