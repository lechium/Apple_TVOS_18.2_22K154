//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (IMKeyValueCollectionUserDefaultsStorage)
+ (_Bool)isSingleton;	// IMP=0x00300000000c4a55
+ (_Bool)replaceSingletonWithSubclass:(id)arg1;	// IMP=0x00300000000c49f4
+ (_Bool)isSingletonOverridden;	// IMP=0x00300000000c49b9
+ (id)overriddenSingleton;	// IMP=0x00300000000c48f7
+ (void)replaceSingletonWithObject:(id)arg1;	// IMP=0x00300000000c4824
+ (void)removeSingletonOverride;	// IMP=0x00300000000c4810
+ (void)overrideSingletonWithObject:(id)arg1;	// IMP=0x00300000000c4701
+ (id)singletonOverride;	// IMP=0x00300000000c463f
+ (id)_createSingleton__im;	// IMP=0x00300000000c4577
- (_Bool)isArchivable_im;	// IMP=0x00100000000472d1
- (_Bool)__isSingletonProxy__im;	// IMP=0x00100000000c49ec
- (void)__im_performAsynchronousTest:(CDUnknownBlockType)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c5101
@end

