//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AppReceiptRefreshOperationOptions : NSObject
{
    long long _authenticationPromptStyle;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    _Bool _needsAuthentication;	// 32 = 0x20
    _Bool _performSinfMirartionCheckBeforeFailing;	// 33 = 0x21
    NSNumber *_targetAccount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000019a1e1
@property(copy, nonatomic) NSNumber *targetAccount; // @synthesize targetAccount=_targetAccount;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_flags;
@property(nonatomic) _Bool performSinfMirartionCheckBeforeFailing; // @synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019a0b5
@property(readonly, nonatomic) NSString *URLBagKey;
- (id)initWithReceiptFlags:(unsigned long long)arg1;	// IMP=0x001000000019a04d

@end

