##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=55-base-classes
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/media/piomix/homeMX/piomix/cpp/playground
ProjectPath            :=/media/piomix/homeMX/piomix/cpp/playground/55-base-classes
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/55-base-classes
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=piomix
Date                   :=13/08/25
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
CXXFLAGS :=  -std=c++20 -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix) $(IntermediateDirectory)/SalariedComissionEmployee.cpp$(ObjectSuffix) $(IntermediateDirectory)/base-class.cpp$(ObjectSuffix) $(IntermediateDirectory)/derived-class.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix): SalariedEmployee.cpp $(IntermediateDirectory)/SalariedEmployee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/55-base-classes/SalariedEmployee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SalariedEmployee.cpp$(DependSuffix): SalariedEmployee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SalariedEmployee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SalariedEmployee.cpp$(DependSuffix) -MM SalariedEmployee.cpp

$(IntermediateDirectory)/SalariedEmployee.cpp$(PreprocessSuffix): SalariedEmployee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SalariedEmployee.cpp$(PreprocessSuffix) SalariedEmployee.cpp

$(IntermediateDirectory)/SalariedComissionEmployee.cpp$(ObjectSuffix): SalariedComissionEmployee.cpp $(IntermediateDirectory)/SalariedComissionEmployee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/55-base-classes/SalariedComissionEmployee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SalariedComissionEmployee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SalariedComissionEmployee.cpp$(DependSuffix): SalariedComissionEmployee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SalariedComissionEmployee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SalariedComissionEmployee.cpp$(DependSuffix) -MM SalariedComissionEmployee.cpp

$(IntermediateDirectory)/SalariedComissionEmployee.cpp$(PreprocessSuffix): SalariedComissionEmployee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SalariedComissionEmployee.cpp$(PreprocessSuffix) SalariedComissionEmployee.cpp

$(IntermediateDirectory)/base-class.cpp$(ObjectSuffix): base-class.cpp $(IntermediateDirectory)/base-class.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/55-base-classes/base-class.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/base-class.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/base-class.cpp$(DependSuffix): base-class.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/base-class.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/base-class.cpp$(DependSuffix) -MM base-class.cpp

$(IntermediateDirectory)/base-class.cpp$(PreprocessSuffix): base-class.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/base-class.cpp$(PreprocessSuffix) base-class.cpp

$(IntermediateDirectory)/derived-class.cpp$(ObjectSuffix): derived-class.cpp $(IntermediateDirectory)/derived-class.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/piomix/homeMX/piomix/cpp/playground/55-base-classes/derived-class.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/derived-class.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/derived-class.cpp$(DependSuffix): derived-class.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/derived-class.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/derived-class.cpp$(DependSuffix) -MM derived-class.cpp

$(IntermediateDirectory)/derived-class.cpp$(PreprocessSuffix): derived-class.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/derived-class.cpp$(PreprocessSuffix) derived-class.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


