//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC16DaemoniOSLibrary21SDXPCHelperImageCache : NSObject
{
}

+ (long long)cacheCount;	// IMP=0x0020000000479a60
+ (struct CGImage *)imageForKey:(id)arg1 contactIDs:(id)arg2;	// IMP=0x0010000000479320
+ (_Bool)cacheIsEmpty;	// IMP=0x0010000000478df0
+ (void)setImage:(struct CGImage *)arg1 forKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x0010000000478cb0
+ (void)evictWithContactIdentifier:(id)arg1;	// IMP=0x0010000000478850
+ (void)purgeAvatars;	// IMP=0x0010000000477780
+ (void)clearCacheWithSync:(_Bool)arg1;	// IMP=0x00100000004774b0
- (id)init;	// IMP=0x0040000000479ae0

@end

