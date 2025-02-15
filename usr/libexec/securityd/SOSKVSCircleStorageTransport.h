//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface SOSKVSCircleStorageTransport
{
    NSMutableDictionary *pending_changes;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000021ef3d
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName;
@property(retain, nonatomic) NSMutableDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021ee55
- (_Bool)kvsSendOfficialDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021edf6
- (_Bool)kvsRingFlushChanges:(struct __CFError **)arg1;	// IMP=0x001000000021ede4
- (_Bool)kvsRingPostRing:(struct __CFString *)arg1 ring:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021ed96
- (_Bool)kvssendDebugInfo:(struct __CFString *)arg1 debug:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021ecfe
- (_Bool)kvsAppendDebugKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000021ecc6
- (_Bool)kvsAppendRingKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000021eb3f
- (_Bool)kvsAppendKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000021e9c2
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021e942
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021e6d3
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021e685
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x001000000021e673
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021e5d6
- (void)kvsAddToPendingChanges:(struct __CFString *)arg1 data:(struct __CFData *)arg2;	// IMP=0x001000000021e4ce
- (_Bool)kvsSendPendingChanges:(struct __CFError **)arg1;	// IMP=0x001000000021e396
- (long long)getTransportType;	// IMP=0x001000000021e38b
- (id)getCircleName;	// IMP=0x001000000021e379
- (id)initWithAccount:(id)arg1 andCircleName:(id)arg2;	// IMP=0x001000000021e267
- (id)init;	// IMP=0x001000000021e238

@end

