//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSSettings, NSString;

@interface PBHIDSender : NSObject
{
    unsigned long long _senderID;	// 8 = 0x8
    long long _category;	// 16 = 0x10
    long long _remoteType;	// 24 = 0x18
    BSSettings *_settings;	// 32 = 0x20
}

+ (_Bool)_isMultiButtonMFIGamePad:(struct __IOHIDServiceClient *)arg1;	// IMP=0x002000000009d676
+ (id)senderMediaRemote;	// IMP=0x001000000009c9e8
+ (id)senderIR;	// IMP=0x001000000009c94c
+ (id)senderCEC;	// IMP=0x001000000009c8b0
- (void).cxx_destruct;	// IMP=0x002000000009d905
@property(readonly, nonatomic) BSSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) long long remoteType; // @synthesize remoteType=_remoteType;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000009d513
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000009d4c2
- (id)succinctDescriptionBuilder;	// IMP=0x001000000009d334
- (id)succinctDescription;	// IMP=0x001000000009d2e3
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009cff0
@property(readonly) unsigned long long hash;
- (unsigned int)_vendorID;	// IMP=0x001000000009ceea
@property(readonly, nonatomic, getter=isMultiButtonMFIGamePad) _Bool multiButtonMFIGamePad;
@property(readonly, nonatomic, getter=isFirstParty) _Bool firstParty;
- (id)initWithSenderID:(unsigned long long)arg1 category:(long long)arg2 remoteType:(long long)arg3 settings:(id)arg4;	// IMP=0x001000000009cdfe
- (id)initWithCategory:(long long)arg1;	// IMP=0x001000000009cde0
- (id)initWithHIDServiceClient:(struct __IOHIDServiceClient *)arg1;	// IMP=0x001000000009ca84

// Remaining properties
@property(readonly) Class superclass;

@end

