//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageLogEvent : HMMLogEvent
{
    _Bool _sending;	// 8 = 0x8
    _Bool _secure;	// 9 = 0x9
    int _transportType;	// 12 = 0xc
    NSString *_msgIdentifier;	// 16 = 0x10
    NSString *_transactionIdentifier;	// 24 = 0x18
    NSString *_msgName;	// 32 = 0x20
    long long _msgType;	// 40 = 0x28
    NSString *_peerInformation;	// 48 = 0x30
    long long _msgQoS;	// 56 = 0x38
}

+ (id)receivedRemoteMessageName:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(_Bool)arg6 transportType:(int)arg7 messageQoS:(long long)arg8;	// IMP=0x00600000001d0438
+ (id)sentRemoteMessageName:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(_Bool)arg6 transportType:(int)arg7 messageQoS:(long long)arg8;	// IMP=0x00600000001d035a
+ (id)sentRemoteMessage:(id)arg1 transportType:(int)arg2;	// IMP=0x00600000001d0335
+ (id)sentRemoteMessage:(id)arg1 device:(id)arg2 transportType:(int)arg3;	// IMP=0x00600000001d0315
+ (id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2;	// IMP=0x00600000001d02f3
+ (id)newFromRemoteMessage:(id)arg1 device:(id)arg2 transportType:(int)arg3 sending:(_Bool)arg4;	// IMP=0x00600000001d005d
+ (id)peerInformationForRemoteMessage:(id)arg1;	// IMP=0x00600000001cfdd5
+ (id)peerInformationForDevice:(id)arg1;	// IMP=0x00600000001cfc93
- (void).cxx_destruct;	// IMP=0x00000000001cfc40
@property(readonly, nonatomic) long long msgQoS; // @synthesize msgQoS=_msgQoS;
@property(readonly, nonatomic) NSString *peerInformation; // @synthesize peerInformation=_peerInformation;
@property(readonly, nonatomic) long long msgType; // @synthesize msgType=_msgType;
@property(readonly, nonatomic) NSString *msgName; // @synthesize msgName=_msgName;
@property(readonly, nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSString *msgIdentifier; // @synthesize msgIdentifier=_msgIdentifier;
@property(readonly, nonatomic) _Bool sending; // @synthesize sending=_sending;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (id)initWithMessageName:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(_Bool)arg6 transportType:(int)arg7 sending:(_Bool)arg8 messageQoS:(long long)arg9;	// IMP=0x00000000001cfa35

@end

