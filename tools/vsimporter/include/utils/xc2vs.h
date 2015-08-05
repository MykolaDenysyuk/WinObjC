//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#pragma once

#include "types.h"

class PBXFile;
class PBXBuildFile;
class VCProject;
class VCProjectItem;
class BuildSettings;

void addFileToVS(const String& itemHint, const PBXFile* file, VCProject& proj, const BuildSettings& bs);
void addBuildFileToVS(const String& itemHint, const PBXBuildFile* buildFile, VCProject& proj, const BuildSettings& bs);
VCProjectItem* addRelativeFilePathToVS(const String& itemName, const String& filePath, const String& filterPath, VCProject& proj, const BuildSettings& bs);