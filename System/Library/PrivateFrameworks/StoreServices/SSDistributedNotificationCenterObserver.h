//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SSDistributedNotificationCenterObserver : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;	// IMP=0x00000000000d1d2b
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d1c9d

@end

