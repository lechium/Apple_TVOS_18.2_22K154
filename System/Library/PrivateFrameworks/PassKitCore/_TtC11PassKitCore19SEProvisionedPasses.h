//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC11PassKitCore19SEProvisionedPasses : NSObject
{
    MISSING_TYPE *externalProvisioningMode;	// 8 = 0x8
    MISSING_TYPE *isExpressModeSetupOptional;	// 17 = 0x11
    MISSING_TYPE *isExpressEnabled;	// 18 = 0x12
    MISSING_TYPE *cardIdentifier;	// 24 = 0x18
    MISSING_TYPE *notificationSuppressionAssertion;	// 40 = 0x28
    MISSING_TYPE *provisioningTemplateIdentifier;	// 48 = 0x30
    MISSING_TYPE *passUniqueIdentifiers;	// 64 = 0x40
    MISSING_TYPE *passesForUniqueIdentifier;	// 72 = 0x48
    MISSING_TYPE *moreInfoItemsForPass;	// 80 = 0x50
    MISSING_TYPE *suppressMakeDefaultOfferForPass;	// 88 = 0x58
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000012a6c0
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012a650
- (void).cxx_destruct;	// IMP=0x0000000000128700
- (id)init;	// IMP=0x000000000012c040
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012bfc0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012ad50
@property(nonatomic, readonly) NSString *description;
- (void)passLibraryDidChangeWithNotification:(id)arg1;	// IMP=0x0000000000129d50
- (void)dealloc;	// IMP=0x00000000001286e0

@end

