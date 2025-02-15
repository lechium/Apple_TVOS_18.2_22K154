//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPCSharedSessionParticipant : NSObject
{
    _Bool _local;	// 8 = 0x8
    long long _sessionType;	// 16 = 0x10
    NSString *_expanseIdentifier;	// 24 = 0x18
    NSString *_liveLinkIdentifier;	// 32 = 0x20
    long long _liveLinkServiceIdentifier;	// 40 = 0x28
    NSString *_mediaRemoteGroupSessionIdentifier;	// 48 = 0x30
    NSString *_mediaRemoteUserIdentityIdentifier;	// 56 = 0x38
}

+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x00100000002ee1c0
- (void).cxx_destruct;	// IMP=0x00000000002fb9b2
- (id)mpc_jsonValue;	// IMP=0x00000000002eb54c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

