//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorization, NSError, NSString;

@interface CDLegacyAppSignInDidFinishAuthRequest : NSObject
{
    AKAuthorization *_authorization;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001da93
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AKAuthorization *authorization; // @synthesize authorization=_authorization;
@property(readonly, copy) NSString *description;
- (id)makeRapportDictionary;	// IMP=0x001000000001d8e4
- (id)initWithRapportDictionary:(id)arg1;	// IMP=0x001000000001d7f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

