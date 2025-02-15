//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@interface IMSingletonProxy : NSProxy
{
    id _singleton;	// 8 = 0x8
    id _singletonOverride;	// 16 = 0x10
    Class _overrideClass;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00600000000c4ab8
- (void).cxx_destruct;	// IMP=0x00000000000c50d2
- (id)description;	// IMP=0x00000000000c4fc9
- (void)setSingletonOverride:(id)arg1;	// IMP=0x00000000000c4e1a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000c4c7f
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000c4b89
- (id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2;	// IMP=0x00000000000c4b18
- (id)singletonOverrideRef;	// IMP=0x00000000000c4aff
- (id)singletonRef;	// IMP=0x00000000000c4aea
- (_Bool)__isSingletonProxy__im;	// IMP=0x00000000000c450e

@end

