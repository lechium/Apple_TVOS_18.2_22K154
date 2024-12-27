//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, PBHIDSenderLibrary;

@interface PBHIDEventAnalyticsProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <PBHIDSenderLibrary> _senderLibrary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000079124
@property(readonly, nonatomic) id <PBHIDSenderLibrary> senderLibrary; // @synthesize senderLibrary=_senderLibrary;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_mainQueue_processPressType:(long long)arg1 sender:(id)arg2;	// IMP=0x0010000000078fda
- (void)_queue_processKeyboardEvent:(struct __IOHIDEvent *)arg1 withUsagePage:(unsigned int)arg2 usage:(unsigned int)arg3 sender:(id)arg4;	// IMP=0x0010000000078df5
- (void)processEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0010000000078c9b
- (id)initWithSenderLibrary:(id)arg1;	// IMP=0x0010000000078b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

