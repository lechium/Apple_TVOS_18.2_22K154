//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MLLoaderEvent : NSObject
{
    NSNumber *_modelType;	// 8 = 0x8
    NSNumber *_modelLoadTime;	// 16 = 0x10
    NSString *_modelVersion;	// 24 = 0x18
    NSString *_compilerVersion;	// 32 = 0x20
    NSNumber *_computeUnits;	// 40 = 0x28
    NSNumber *_modelOrigin;	// 48 = 0x30
    NSNumber *_modelLoadError;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    NSString *_modelName;	// 72 = 0x48
    NSNumber *_firstPartyExecutable;	// 80 = 0x50
    NSNumber *_modelIsEncrypted;	// 88 = 0x58
    NSNumber *_modelProgramValidationError;	// 96 = 0x60
    NSNumber *_modelProgramParsingError;	// 104 = 0x68
    NSNumber *_modelEngineType;	// 112 = 0x70
    NSString *_processName;	// 120 = 0x78
    NSNumber *_containsCustomLayer;	// 128 = 0x80
    NSString *_modelHash;	// 136 = 0x88
    NSString *_nnModelNetHash;	// 144 = 0x90
    NSString *_nnModelShapeHash;	// 152 = 0x98
    NSString *_nnModelWeightsHash;	// 160 = 0xa0
    NSNumber *_modelDimension;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000020104c
@property(copy, nonatomic) NSNumber *modelDimension; // @synthesize modelDimension=_modelDimension;
@property(copy, nonatomic) NSString *nnModelWeightsHash; // @synthesize nnModelWeightsHash=_nnModelWeightsHash;
@property(copy, nonatomic) NSString *nnModelShapeHash; // @synthesize nnModelShapeHash=_nnModelShapeHash;
@property(copy, nonatomic) NSString *nnModelNetHash; // @synthesize nnModelNetHash=_nnModelNetHash;
@property(copy, nonatomic) NSString *modelHash; // @synthesize modelHash=_modelHash;
@property(copy, nonatomic) NSNumber *containsCustomLayer; // @synthesize containsCustomLayer=_containsCustomLayer;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSNumber *modelEngineType; // @synthesize modelEngineType=_modelEngineType;
@property(copy, nonatomic) NSNumber *modelProgramParsingError; // @synthesize modelProgramParsingError=_modelProgramParsingError;
@property(copy, nonatomic) NSNumber *modelProgramValidationError; // @synthesize modelProgramValidationError=_modelProgramValidationError;
@property(copy, nonatomic) NSNumber *modelIsEncrypted; // @synthesize modelIsEncrypted=_modelIsEncrypted;
@property(copy, nonatomic) NSNumber *firstPartyExecutable; // @synthesize firstPartyExecutable=_firstPartyExecutable;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSNumber *modelLoadError; // @synthesize modelLoadError=_modelLoadError;
@property(copy, nonatomic) NSNumber *modelOrigin; // @synthesize modelOrigin=_modelOrigin;
@property(copy, nonatomic) NSNumber *computeUnits; // @synthesize computeUnits=_computeUnits;
@property(copy, nonatomic) NSString *compilerVersion; // @synthesize compilerVersion=_compilerVersion;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(copy, nonatomic) NSNumber *modelLoadTime; // @synthesize modelLoadTime=_modelLoadTime;
@property(copy, nonatomic) NSNumber *modelType; // @synthesize modelType=_modelType;
- (id)numberFromCString:(const char *)arg1;	// IMP=0x0000000000200cb3
- (void)extractAndSetModelDetailsFromArchive:(void *)arg1;	// IMP=0x00000000002001c2
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

