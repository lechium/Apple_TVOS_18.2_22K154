//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol AKFollowUpProvider;

@interface AKLivenessRequestProvider
{
    NSString *_event;	// 8 = 0x8
    unsigned long long _livenessReason;	// 16 = 0x10
    NSString *_pushToken;	// 24 = 0x18
    id <AKFollowUpProvider> _followUpProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000d20c4
@property(retain, nonatomic) id <AKFollowUpProvider> followUpProvider; // @synthesize followUpProvider=_followUpProvider;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) unsigned long long livenessReason; // @synthesize livenessReason=_livenessReason;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
- (void)_updateTelemtryOptInForAccount:(id)arg1 withWalrusStatus:(unsigned long long)arg2;	// IMP=0x00100000000d1b39
- (id)authKitBody;	// IMP=0x00100000000cfe95
- (void)addMDMInformationIfNecessaryToRequest:(id)arg1;	// IMP=0x00100000000cfbcd
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000cfb59
- (id)requestURLOverride;	// IMP=0x00100000000cfa83

@end

