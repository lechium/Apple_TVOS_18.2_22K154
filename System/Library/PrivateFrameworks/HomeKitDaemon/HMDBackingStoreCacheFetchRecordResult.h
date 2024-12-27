//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord, HMDBackingStoreCacheGroup, NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheFetchRecordResult : HMFObject
{
    HMDBackingStoreCacheGroup *_group;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    CKRecord *_record;	// 24 = 0x18
    unsigned long long _encoding;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000037a7b5
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)description;	// IMP=0x000000000037a5aa
- (id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 uuid:(id)arg5;	// IMP=0x000000000037a493

@end

