//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_serializeFields;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000049f6ac
+ (id)languageValueKeyPaths;	// IMP=0x001000000049f69f
+ (id)numberValueKeyPaths;	// IMP=0x001000000049f692
+ (id)booleanValueKeyPaths;	// IMP=0x001000000049f685
+ (id)keyPaths;	// IMP=0x001000000049f59d
+ (id)fieldKeyForKeyPath:(id)arg1;	// IMP=0x001000000049f57a
- (void).cxx_destruct;	// IMP=0x000000000049f567
- (id)attributeDescriptions;	// IMP=0x000000000049f49b
- (id)serializeFields;	// IMP=0x000000000049f43b
- (void)setLanguageValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000049f0d7
- (void)setNumberValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000049eee8
- (void)setBoolValue:(_Bool)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000049ecbe
- (id)init;	// IMP=0x000000000049ec53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

