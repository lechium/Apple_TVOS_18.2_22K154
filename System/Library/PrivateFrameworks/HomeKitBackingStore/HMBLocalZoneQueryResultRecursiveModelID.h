//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet, NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultRecursiveModelID
{
    int _parentModelIDOffset;	// 40 = 0x28
    NSUUID *_parentModelID;	// 48 = 0x30
    NSMutableOrderedSet *_modelStack;	// 56 = 0x38
    NSMutableSet *_returnedModels;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005b896
@property(readonly, nonatomic) NSMutableSet *returnedModels; // @synthesize returnedModels=_returnedModels;
@property(readonly, nonatomic) NSMutableOrderedSet *modelStack; // @synthesize modelStack=_modelStack;
@property(retain, nonatomic) NSUUID *parentModelID; // @synthesize parentModelID=_parentModelID;
@property(readonly, nonatomic) int parentModelIDOffset; // @synthesize parentModelIDOffset=_parentModelIDOffset;
- (id)nextObject;	// IMP=0x000000000005b5b9
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x000000000005b4f3
- (id)initWithLocalZone:(id)arg1 modelID:(id)arg2;	// IMP=0x000000000005b14f

@end

