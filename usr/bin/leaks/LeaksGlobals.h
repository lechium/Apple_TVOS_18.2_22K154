//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSError, NSMutableSet, NSString, VMUClassPatternMatcher, VMUDebugTimer, VMUOptionParser;

@interface LeaksGlobals : NSObject
{
    _Bool _normalMode;	// 8 = 0x8
    _Bool _showProcessInfoMode;	// 9 = 0x9
    _Bool _debugMode;	// 10 = 0xa
    _Bool _debugLayout;	// 11 = 0xb
    _Bool _debugHistogram;	// 12 = 0xc
    _Bool _debugReferences;	// 13 = 0xd
    _Bool _debugContents;	// 14 = 0xe
    _Bool _dominatorTreeMode;	// 15 = 0xf
    _Bool _referenceTreeMode;	// 16 = 0x10
    _Bool _groupByType;	// 17 = 0x11
    _Bool _referenceTreeShowRegionVirtualSize;	// 18 = 0x12
    _Bool _traceMode;	// 19 = 0x13
    _Bool _traceTree;	// 20 = 0x14
    _Bool _autoreleasePoolMode;	// 21 = 0x15
    _Bool _allProcesses;	// 22 = 0x16
    _Bool _remoteDeviceMode;	// 23 = 0x17
    _Bool _userDidProvideMaxInterior;	// 24 = 0x18
    MISSING_TYPE *_exactScanning;	// 25 = 0x19
    _Bool _collectVMpageStatistics;	// 26 = 0x1a
    _Bool _suppressPhysFootprintStatistics;	// 27 = 0x1b
    _Bool _checkAbandoned;	// 28 = 0x1c
    _Bool _forkCorpse;	// 29 = 0x1d
    _Bool _collectFullDiskStackLogs;	// 30 = 0x1e
    _Bool _showListOfLeaks;	// 31 = 0x1f
    _Bool _showRawClassNames;	// 32 = 0x20
    _Bool _showStacks;	// 33 = 0x21
    _Bool _fullStacks;	// 34 = 0x22
    _Bool _showSourceInfo;	// 35 = 0x23
    _Bool _showBinaryContents;	// 36 = 0x24
    _Bool _showLeakedVMregions;	// 37 = 0x25
    _Bool _showOnlyVMregions;	// 38 = 0x26
    _Bool _quietMode;	// 39 = 0x27
    _Bool _suppressOutput;	// 40 = 0x28
    _Bool _compress;	// 41 = 0x29
    _Bool _nocontext;	// 42 = 0x2a
    _Bool _excludePersonalInfo;	// 43 = 0x2b
    _Bool _postprocessGraph;	// 44 = 0x2c
    _Bool _atExit;	// 45 = 0x2d
    _Bool _applyDiffFrom;	// 46 = 0x2e
    _Bool _rateLimit;	// 47 = 0x2f
    _Bool _corpseWasGenerated;	// 48 = 0x30
    _Bool _targetIsAncestor;	// 49 = 0x31
    _Bool _resymbolicateAll;	// 50 = 0x32
    _Bool _showResymbolicationDetails;	// 51 = 0x33
    _Bool _useLZFSEcompression;	// 52 = 0x34
    int _returnCode;	// 56 = 0x38
    unsigned int _objectContentLevel;	// 60 = 0x3c
    int _nonIPSMemgraphCount;	// 64 = 0x40
    unsigned int _autoreleasePoolsExtraReleasesCount;	// 68 = 0x44
    VMUDebugTimer *_debugTimer;	// 72 = 0x48
    NSString *_inputGraphPath;	// 80 = 0x50
    NSData *_inputGraphData;	// 88 = 0x58
    NSString *_outputGraphPath;	// 96 = 0x60
    NSData *_preGenerationGraphData;	// 104 = 0x68
    NSString *_preGenerationGraphPath;	// 112 = 0x70
    NSArray *_inputOriginalBinaryPaths;	// 120 = 0x78
    VMUOptionParser *_parser;	// 128 = 0x80
    NSError *_argumentError;	// 136 = 0x88
    NSMutableSet *_excludedFrames;	// 144 = 0x90
    NSString *_remoteDeviceTargetDevice;	// 152 = 0x98
    NSString *_remoteDeviceTargetProcess;	// 160 = 0xa0
    unsigned long long _maxInterior;	// 168 = 0xa8
    unsigned long long _forkCorpseRetryTime;	// 176 = 0xb0
    unsigned long long _timeLimitInSeconds;	// 184 = 0xb8
    unsigned long long _desiredAddress;	// 192 = 0xc0
    VMUClassPatternMatcher *_classesPatternMatcher;	// 200 = 0xc8
    NSString *_ipsIncidentID;	// 208 = 0xd0
    struct __sFILE *_outputFile;	// 216 = 0xd8
    NSString *_resymbolicationDsymPath;	// 224 = 0xe0
    NSArray *_resymbolicationLibraryNames;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x002000000000208a
@property(nonatomic) _Bool useLZFSEcompression; // @synthesize useLZFSEcompression=_useLZFSEcompression;
@property(nonatomic) _Bool showResymbolicationDetails; // @synthesize showResymbolicationDetails=_showResymbolicationDetails;
@property(nonatomic) _Bool resymbolicateAll; // @synthesize resymbolicateAll=_resymbolicateAll;
@property(retain, nonatomic) NSArray *resymbolicationLibraryNames; // @synthesize resymbolicationLibraryNames=_resymbolicationLibraryNames;
@property(retain, nonatomic) NSString *resymbolicationDsymPath; // @synthesize resymbolicationDsymPath=_resymbolicationDsymPath;
@property(nonatomic) unsigned int autoreleasePoolsExtraReleasesCount; // @synthesize autoreleasePoolsExtraReleasesCount=_autoreleasePoolsExtraReleasesCount;
@property(nonatomic) _Bool targetIsAncestor; // @synthesize targetIsAncestor=_targetIsAncestor;
@property(nonatomic) _Bool corpseWasGenerated; // @synthesize corpseWasGenerated=_corpseWasGenerated;
@property(nonatomic) struct __sFILE *outputFile; // @synthesize outputFile=_outputFile;
@property(nonatomic) _Bool rateLimit; // @synthesize rateLimit=_rateLimit;
@property(nonatomic) int nonIPSMemgraphCount; // @synthesize nonIPSMemgraphCount=_nonIPSMemgraphCount;
@property(retain, nonatomic) NSString *ipsIncidentID; // @synthesize ipsIncidentID=_ipsIncidentID;
@property(retain, nonatomic) VMUClassPatternMatcher *classesPatternMatcher; // @synthesize classesPatternMatcher=_classesPatternMatcher;
@property(nonatomic) unsigned long long desiredAddress; // @synthesize desiredAddress=_desiredAddress;
@property(nonatomic) _Bool applyDiffFrom; // @synthesize applyDiffFrom=_applyDiffFrom;
@property(nonatomic) _Bool atExit; // @synthesize atExit=_atExit;
@property(nonatomic) _Bool postprocessGraph; // @synthesize postprocessGraph=_postprocessGraph;
@property(nonatomic) _Bool excludePersonalInfo; // @synthesize excludePersonalInfo=_excludePersonalInfo;
@property(nonatomic) _Bool nocontext; // @synthesize nocontext=_nocontext;
@property(nonatomic) unsigned int objectContentLevel; // @synthesize objectContentLevel=_objectContentLevel;
@property(nonatomic) _Bool compress; // @synthesize compress=_compress;
@property(nonatomic) _Bool suppressOutput; // @synthesize suppressOutput=_suppressOutput;
@property(nonatomic) _Bool quietMode; // @synthesize quietMode=_quietMode;
@property(nonatomic) _Bool showOnlyVMregions; // @synthesize showOnlyVMregions=_showOnlyVMregions;
@property(nonatomic) _Bool showLeakedVMregions; // @synthesize showLeakedVMregions=_showLeakedVMregions;
@property(nonatomic) _Bool showBinaryContents; // @synthesize showBinaryContents=_showBinaryContents;
@property(nonatomic) _Bool showSourceInfo; // @synthesize showSourceInfo=_showSourceInfo;
@property(nonatomic) _Bool fullStacks; // @synthesize fullStacks=_fullStacks;
@property(nonatomic) _Bool showStacks; // @synthesize showStacks=_showStacks;
@property(nonatomic) _Bool showRawClassNames; // @synthesize showRawClassNames=_showRawClassNames;
@property(nonatomic) _Bool showListOfLeaks; // @synthesize showListOfLeaks=_showListOfLeaks;
@property(nonatomic) unsigned long long timeLimitInSeconds; // @synthesize timeLimitInSeconds=_timeLimitInSeconds;
@property(nonatomic) _Bool collectFullDiskStackLogs; // @synthesize collectFullDiskStackLogs=_collectFullDiskStackLogs;
@property(nonatomic) unsigned long long forkCorpseRetryTime; // @synthesize forkCorpseRetryTime=_forkCorpseRetryTime;
@property(nonatomic) _Bool forkCorpse; // @synthesize forkCorpse=_forkCorpse;
@property(nonatomic) _Bool checkAbandoned; // @synthesize checkAbandoned=_checkAbandoned;
@property(nonatomic) _Bool suppressPhysFootprintStatistics; // @synthesize suppressPhysFootprintStatistics=_suppressPhysFootprintStatistics;
@property(nonatomic) _Bool collectVMpageStatistics; // @synthesize collectVMpageStatistics=_collectVMpageStatistics;
@property(nonatomic) _Bool exactScanning; // @synthesize exactScanning=_exactScanning;
@property(nonatomic) _Bool userDidProvideMaxInterior; // @synthesize userDidProvideMaxInterior=_userDidProvideMaxInterior;
@property(nonatomic) unsigned long long maxInterior; // @synthesize maxInterior=_maxInterior;
@property(retain, nonatomic) NSString *remoteDeviceTargetProcess; // @synthesize remoteDeviceTargetProcess=_remoteDeviceTargetProcess;
@property(retain, nonatomic) NSString *remoteDeviceTargetDevice; // @synthesize remoteDeviceTargetDevice=_remoteDeviceTargetDevice;
@property(nonatomic) _Bool remoteDeviceMode; // @synthesize remoteDeviceMode=_remoteDeviceMode;
@property(nonatomic) _Bool allProcesses; // @synthesize allProcesses=_allProcesses;
@property(nonatomic) _Bool autoreleasePoolMode; // @synthesize autoreleasePoolMode=_autoreleasePoolMode;
@property(nonatomic) _Bool traceTree; // @synthesize traceTree=_traceTree;
@property(nonatomic) _Bool traceMode; // @synthesize traceMode=_traceMode;
@property(nonatomic) _Bool referenceTreeShowRegionVirtualSize; // @synthesize referenceTreeShowRegionVirtualSize=_referenceTreeShowRegionVirtualSize;
@property(nonatomic) _Bool groupByType; // @synthesize groupByType=_groupByType;
@property(nonatomic) _Bool referenceTreeMode; // @synthesize referenceTreeMode=_referenceTreeMode;
@property(nonatomic) _Bool dominatorTreeMode; // @synthesize dominatorTreeMode=_dominatorTreeMode;
@property(nonatomic) _Bool debugContents; // @synthesize debugContents=_debugContents;
@property(nonatomic) _Bool debugReferences; // @synthesize debugReferences=_debugReferences;
@property(nonatomic) _Bool debugHistogram; // @synthesize debugHistogram=_debugHistogram;
@property(nonatomic) _Bool debugLayout; // @synthesize debugLayout=_debugLayout;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) _Bool showProcessInfoMode; // @synthesize showProcessInfoMode=_showProcessInfoMode;
@property(nonatomic) _Bool normalMode; // @synthesize normalMode=_normalMode;
@property(retain, nonatomic) NSMutableSet *excludedFrames; // @synthesize excludedFrames=_excludedFrames;
@property(retain, nonatomic) NSError *argumentError; // @synthesize argumentError=_argumentError;
@property(retain, nonatomic) VMUOptionParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSArray *inputOriginalBinaryPaths; // @synthesize inputOriginalBinaryPaths=_inputOriginalBinaryPaths;
@property(retain, nonatomic) NSString *preGenerationGraphPath; // @synthesize preGenerationGraphPath=_preGenerationGraphPath;
@property(retain, nonatomic) NSData *preGenerationGraphData; // @synthesize preGenerationGraphData=_preGenerationGraphData;
@property(retain, nonatomic) NSString *outputGraphPath; // @synthesize outputGraphPath=_outputGraphPath;
@property(retain, nonatomic) NSData *inputGraphData; // @synthesize inputGraphData=_inputGraphData;
@property(retain, nonatomic) NSString *inputGraphPath; // @synthesize inputGraphPath=_inputGraphPath;
@property(nonatomic) int returnCode; // @synthesize returnCode=_returnCode;
@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
- (_Bool)symbolicationMode;	// IMP=0x0010000000001a20
- (id)init;	// IMP=0x00100000000019b7

@end

