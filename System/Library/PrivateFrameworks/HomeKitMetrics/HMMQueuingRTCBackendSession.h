//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUUID;
@protocol _HMMLogBackendSubmitterDelegate;

__attribute__((visibility("hidden")))
@interface HMMQueuingRTCBackendSession : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isOpen;	// 12 = 0xc
    NSMutableArray *_queuedEvents;	// 16 = 0x10
    _Bool _isRealtime;	// 24 = 0x18
    double _lastEventTime;	// 32 = 0x20
    NSString *_serviceName;	// 40 = 0x28
    NSUUID *_sessionUUID;	// 48 = 0x30
    id <_HMMLogBackendSubmitterDelegate> _submitter;	// 56 = 0x38
    CDUnknownBlockType _timeSourceBlock;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000006a6e
- (void).cxx_destruct;	// IMP=0x0000000000006a27
@property(readonly, nonatomic) CDUnknownBlockType timeSourceBlock; // @synthesize timeSourceBlock=_timeSourceBlock;
@property(readonly, nonatomic) __weak id <_HMMLogBackendSubmitterDelegate> submitter; // @synthesize submitter=_submitter;
@property(readonly, nonatomic) _Bool isRealtime; // @synthesize isRealtime=_isRealtime;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)dealloc;	// IMP=0x00000000000069ac
- (void)close;	// IMP=0x0000000000006890
@property(readonly, nonatomic) double lastEventTime; // @synthesize lastEventTime=_lastEventTime;
- (_Bool)sendMessage:(id)arg1;	// IMP=0x00000000000067d4
- (id)initWithServiceName:(id)arg1 sessionUUID:(id)arg2 isRealtime:(_Bool)arg3 submitter:(id)arg4 timeSourceBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000066a4

@end

