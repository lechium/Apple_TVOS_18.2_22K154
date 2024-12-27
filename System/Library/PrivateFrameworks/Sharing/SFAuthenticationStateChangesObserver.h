//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFAuthenticationStateChangesObserver : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _observer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006c88d
@property(readonly, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)stateDidChange;	// IMP=0x000000000006c7d4
- (id)initWithObserver:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x000000000006c715

@end

