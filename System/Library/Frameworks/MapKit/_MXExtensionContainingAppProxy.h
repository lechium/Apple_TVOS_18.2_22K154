//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _MXExtensionContainingAppProxy : NSObject
{
    NSMutableSet *_extensionUIIdentifiers;	// 8 = 0x8
    NSMutableSet *_extensionNonUIIdentifiers;	// 16 = 0x10
    NSString *_containingAppIdentifer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e978b
@property(readonly, copy, nonatomic) NSString *containingAppIdentifer; // @synthesize containingAppIdentifer=_containingAppIdentifer;
@property(retain, nonatomic) NSMutableSet *extensionNonUIIdentifiers; // @synthesize extensionNonUIIdentifiers=_extensionNonUIIdentifiers;
@property(retain, nonatomic) NSMutableSet *extensionUIIdentifiers; // @synthesize extensionUIIdentifiers=_extensionUIIdentifiers;
- (id)initWithContainingAppIdentifer:(id)arg1;	// IMP=0x00000000000e967d

@end

