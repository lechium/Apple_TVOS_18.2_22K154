//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IPFoundationNamePreferenceInfoProvider : NSObject
{
}

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;	// IMP=0x001000000000be1f
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;	// IMP=0x001000000000bd7e
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;	// IMP=0x001000000000bd04
+ (id)canonicalNameToNativeKeyName;	// IMP=0x001000000000bc41
+ (id)nativeKeyNameToCanonicalKeyName;	// IMP=0x001000000000bb4c
+ (id)domain;	// IMP=0x001000000000bb3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

