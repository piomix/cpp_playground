##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=56-poly-virtual-functions
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/media/piomix/homeMX/piomix/cpp/playground
ProjectPath            :=/media/piomix/homeMX/piomix/cpp/playground/56-poly-virtual-functions
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/56-poly-virtual-functions
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=piomix
Date                   :=19/08/25
CodeLitePath           :=/home/piomix/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=/media/piomix/homeMX/piomix/cpp/playground/build-$(WorkspaceConfiguration)/bin
OutputFile             :=../build-$(WorkspaceConfiguration)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall -std=c++20 $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/CommissionEmployee.cpp$(ObjectSuffix) $(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/CommissionEmployee.cpp$(ObjectSuffix): CommissionEmployee.cpp $(IntermediateDirectory)/CommissionEmployee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/56-poly-virtual-functions/CommissionEmployee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CommissionEmployee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CommissionEmployee.cpp$(DependSuffix): CommissionEmployee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CommissionEmployee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CommissionEmployee.cpp$(DependSuffix) -MM CommissionEmployee.cpp

$(IntermediateDirectory)/CommissionEmployee.cpp$(PreprocessSuffix): CommissionEmployee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CommissionEmployee.cpp$(PreprocessSuffix) CommissionEmployee.cpp

$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix): Employee.cpp $(IntermediateDirectory)/Employee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/56-poly-virtual-functions/Employee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Employee.cpp$(DependSuffix): Employee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Employee.cpp$(DependSuffix) -MM Employee.cpp

$(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix): Employee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix) Employee.cpp

$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix): SalariedEmployee.cpp $(IntermediateDirectory)/SalariedEmployee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/56-poly-virtual-functions/SalariedEmployee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SalariedEmployee.cpp$(DependSuffix): SalariedEmployee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SalariedEmployee.cpp$(DependSuffix) -MM SalariedEmployee.cpp

$(IntermediateDirectory)/SalariedEmployee.cpp$(PreprocessSuffix): SalariedEmployee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SalariedEmployee.cpp$(PreprocessSuffix) SalariedEmployee.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/56-poly-virtual-functions/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


