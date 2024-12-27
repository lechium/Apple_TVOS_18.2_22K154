//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _GEOConfigDB;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBInsertOperation
{
    _GEOConfigDB *_configDB;	// 16 = 0x10
    long long _rowId;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSString *_key;	// 40 = 0x28
    NSString *_value;	// 48 = 0x30
    long long _parentId;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000019b454
- (_Bool)performOperation;	// IMP=0x000000000019b3ae
- (id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 key:(id)arg4 value:(id)arg5 parentId:(long long)arg6;	// IMP=0x000000000019b293

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

