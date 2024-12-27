//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKGenericKeyValuePair : NSObject
{
    NSString *_kvsKey;	// 8 = 0x8
    NSData *_kvsPayload;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005dbf
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x0010000000005d51
- (void).cxx_destruct;	// IMP=0x0000000000005d29
@property(readonly, nonatomic) NSData *kvsPayload; // @synthesize kvsPayload=_kvsPayload;
@property(readonly, nonatomic) NSString *kvsKey; // @synthesize kvsKey=_kvsKey;
- (double)timestamp;	// IMP=0x0000000000005d0c
- (id)kvsValueDescription;	// IMP=0x0000000000005c82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005c15
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005b3b
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x0000000000005aa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

