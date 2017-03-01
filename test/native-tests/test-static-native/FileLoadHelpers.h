//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
#pragma once

enum class LoadScriptResult {
    S_OK, 
    S_ERROR
};
//just fake the load until i can figure out why the original won't compile on mac.
class FileLoadHelpers
{
    public:
      static LoadScriptResult LoadScriptFromFile(std::string filename, std::string& contents);
};
