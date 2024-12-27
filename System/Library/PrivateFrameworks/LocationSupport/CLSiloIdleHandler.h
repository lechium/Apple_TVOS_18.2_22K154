//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSiloIdleHandler : NSObject
{
    CDUnknownBlockType _onIdle;	// 8 = 0x8
    CDUnknownBlockType _onResume;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005a35
@property(copy) CDUnknownBlockType onResume; // @synthesize onResume=_onResume;
@property(copy) CDUnknownBlockType onIdle; // @synthesize onIdle=_onIdle;
- (void)invalidate;	// IMP=0x00000000000059bd
- (id)initWithIdleHandler:(CDUnknownBlockType)arg1 onResume:(CDUnknownBlockType)arg2;	// IMP=0x000000000000591f

@end

