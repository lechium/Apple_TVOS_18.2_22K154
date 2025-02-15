//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UPDUserAccountTypeIdentifier;

__attribute__((visibility("hidden")))
@interface UPDAccountChangeEvent : NSObject
{
    unsigned long long _changeType;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    NSString *_accountTypeIdentifier;	// 24 = 0x18
    NSString *_altDSID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005e00
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, copy, nonatomic) NSString *accountTypeIdentifier; // @synthesize accountTypeIdentifier=_accountTypeIdentifier;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000005d88
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000005bc0
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000005bac
- (id)succinctDescription;	// IMP=0x0000000000005b5c
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)initWithChangeType:(unsigned long long)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 altDSID:(id)arg4;	// IMP=0x0000000000005a44
@property(readonly, nonatomic) UPDUserAccountTypeIdentifier *userAccountTypeIdentifier;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

