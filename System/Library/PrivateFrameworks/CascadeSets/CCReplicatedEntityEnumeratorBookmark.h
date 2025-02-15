//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDistributedTimestampStateVector, NSString;

__attribute__((visibility("hidden")))
@interface CCReplicatedEntityEnumeratorBookmark : NSObject
{
    CKDistributedTimestampStateVector *_contentVector;	// 8 = 0x8
    CKDistributedTimestampStateVector *_metaContentVector;	// 16 = 0x10
    unsigned long long _version;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002be99
+ (long long)currentVersion;	// IMP=0x001000000002be8e
- (void).cxx_destruct;	// IMP=0x000000000002c102
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) CKDistributedTimestampStateVector *metaContentVector; // @synthesize metaContentVector=_metaContentVector;
@property(readonly, nonatomic) CKDistributedTimestampStateVector *contentVector; // @synthesize contentVector=_contentVector;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002bf3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002bea1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002bd89
- (id)initWithContentVector:(id)arg1 metaContentVector:(id)arg2 version:(unsigned long long)arg3;	// IMP=0x000000000002bce4
- (id)initWithContentVector:(id)arg1 metaContentVector:(id)arg2;	// IMP=0x000000000002bc66
- (id)init;	// IMP=0x000000000002bc1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

