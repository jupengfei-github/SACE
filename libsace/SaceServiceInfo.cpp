/*
 * Copyright (C) 2018-2024 The Service-And-Command Excutor Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sace/SaceServiceInfo.h>

using namespace std;

namespace android {
/* String Command */
const string SaceServiceInfo::SERVICE_GET_BY_NAME  = "GET_BY_NAME";
const string SaceServiceInfo::SERVICE_GET_BY_LABEL = "GET_BY_LABEL";

string SaceServiceInfo::mapStateStr (enum ServiceState state) {
    switch (state) {
        case SERVICE_RUNNING:
            return "SERVICE_RUNNING";
        case SERVICE_PAUSED:
            return "SERVICE_PAUSED";
        case SERVICE_DIED:
            return "SERVICE_DIED";
        case SERVICE_STOPED:
            return "SERVICE_STOPED";
        case SERVICE_FINISHED:
            return "SERVICE_FINISHED";
        default:
            return "UNKOWN";
    }
}

}; //namespace android
