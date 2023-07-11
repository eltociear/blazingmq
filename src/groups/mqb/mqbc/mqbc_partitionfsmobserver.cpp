// Copyright 2020-2023 Bloomberg Finance L.P.
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// mqbc_partitionfsmobserver.cpp                                      -*-C++-*-
#include <mqbc_partitionfsmobserver.h>

#include <mqbscm_version.h>
// BDE
#include <bsls_annotation.h>

namespace BloombergLP {
namespace mqbc {

// --------------------------
// class PartitionFSMObserver
// --------------------------

PartitionFSMObserver::~PartitionFSMObserver()
{
    // NOTHING
}

void PartitionFSMObserver::onTransitionToPrimaryHealed(
    BSLS_ANNOTATION_UNUSED int partitionId,
    BSLS_ANNOTATION_UNUSED PartitionStateTableState::Enum oldState)
{
    // NOTHING
}

void PartitionFSMObserver::onTransitionToReplicaHealed(
    BSLS_ANNOTATION_UNUSED int partitionId,
    BSLS_ANNOTATION_UNUSED PartitionStateTableState::Enum oldState)
{
    // NOTHING
}

void PartitionFSMObserver::onTransitionToUnknown(
    BSLS_ANNOTATION_UNUSED int partitionId,
    BSLS_ANNOTATION_UNUSED PartitionStateTableState::Enum oldState)
{
    // NOTHING
}

}  // close package namespace
}  // close enterprise namespace
