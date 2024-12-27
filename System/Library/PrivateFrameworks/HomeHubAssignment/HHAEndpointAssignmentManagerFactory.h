//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HHATimerFactory;

__attribute__((visibility("hidden")))
@interface HHAEndpointAssignmentManagerFactory : NSObject
{
    id <HHATimerFactory> _timerFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000106ab
@property(readonly, nonatomic) id <HHATimerFactory> timerFactory; // @synthesize timerFactory=_timerFactory;
- (id)createEndpointAssignmentManagerWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000001061f
- (id)initWithTimerFactory:(id)arg1;	// IMP=0x00000000000105b4

@end

