//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CDRapportListener : NSObject
{
    _Atomic _Bool _activateCalledAtomic;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _deviceFoundHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000f56a
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_handleEvent:(id)arg1;	// IMP=0x001000000000f410
- (void)_invalidated;	// IMP=0x001000000000f3db
- (void)_activated;	// IMP=0x001000000000f2c5
- (void)invalidate;	// IMP=0x001000000000f264
- (void)activate;	// IMP=0x001000000000f1f6
- (id)init;	// IMP=0x001000000000f192

@end

