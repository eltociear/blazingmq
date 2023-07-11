// Copyright 2018-2023 Bloomberg Finance L.P.
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

// mwcex_promise.cpp                                                  -*-C++-*-
#include <mwcex_promise.h>

#include <mwcscm_version.h>

namespace BloombergLP {
namespace mwcex {

// -------------------
// class PromiseBroken
// -------------------

// CREATORS
PromiseBroken::PromiseBroken() BSLS_KEYWORD_NOEXCEPT : bsl::exception()
{
    // NOTHING
}

// ACCESSORS
const char* PromiseBroken::what() const BSLS_EXCEPTION_WHAT_NOTHROW
{
    return "PromiseBroken";
}

}  // close package namespace
}  // close enterprise namespace
