//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncSnapshot, NSArray, NSDate, NSString;

@interface _ADDeviceSyncSnapshotMutation : NSObject
{
    ADDeviceSyncSnapshot *_base;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasItems:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000e3251
- (void)setItems:(id)arg1;	// IMP=0x00100000000e3231
- (id)getItems;	// IMP=0x00100000000e31f9
- (void)setDate:(id)arg1;	// IMP=0x00100000000e31d9
- (id)getDate;	// IMP=0x00100000000e31a1
- (void)setGeneration:(unsigned long long)arg1;	// IMP=0x00100000000e3193
- (unsigned long long)getGeneration;	// IMP=0x00100000000e3171
- (_Bool)isDirty;	// IMP=0x00100000000e3166
- (id)initWithBase:(id)arg1;	// IMP=0x00100000000e30fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

