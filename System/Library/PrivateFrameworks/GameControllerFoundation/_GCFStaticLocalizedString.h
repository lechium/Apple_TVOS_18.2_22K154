//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCFLocalizedString.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCFStaticLocalizedString : GCFLocalizedString
{
    NSString *_key;	// 8 = 0x8
    NSString *__realizedString;	// 16 = 0x10
}

+ (id)alloc;	// IMP=0x0060000000020275
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000002025d
- (id)redactedDescription;	// IMP=0x0000000000020551
- (id)table;	// IMP=0x0000000000020544
- (id)bundle;	// IMP=0x000000000002052b
- (id)key;	// IMP=0x000000000002051a
- (id)_realizedString;	// IMP=0x0000000000020465
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020360
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020315
- (Class)classForCoder;	// IMP=0x0000000000020304
- (void)dealloc;	// IMP=0x00000000000202c2
- (unsigned long long)retainCount;	// IMP=0x00000000000202b5
- (_Bool)_tryRetain;	// IMP=0x00000000000202ad
- (_Bool)_isDeallocating;	// IMP=0x00000000000202a5
- (oneway void)release;	// IMP=0x000000000002029f
- (id)retain;	// IMP=0x0000000000020296
- (id)autorelease;	// IMP=0x000000000002028d

@end

