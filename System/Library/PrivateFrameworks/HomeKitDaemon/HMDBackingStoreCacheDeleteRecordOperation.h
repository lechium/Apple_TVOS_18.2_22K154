//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup, NSArray;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheDeleteRecordOperation
{
    HMDBackingStoreCacheGroup *_group;	// 8 = 0x8
    NSArray *_recordNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000037a462
@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;	// IMP=0x0000000000379fe6
- (id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000379f30

@end

