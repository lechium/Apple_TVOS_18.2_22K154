//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManagerRoutine, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _CLLocationManagerRoutineProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _updating;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    id _inertialDelegate;	// 40 = 0x28
    CLLocationManagerRoutine *_locationManagerRoutine;	// 48 = 0x30
}

@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) CLLocationManagerRoutine *locationManagerRoutine; // @synthesize locationManagerRoutine=_locationManagerRoutine;
@property(nonatomic) id inertialDelegate; // @synthesize inertialDelegate=_inertialDelegate;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)createConnection;	// IMP=0x000000000000f071
- (void)didUpdateInertialData:(id)arg1;	// IMP=0x000000000000ee35
- (void)didUpdateLocations:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ebb0
- (void)didUpdateLocations:(id)arg1;	// IMP=0x000000000000e974
- (void)dealloc;	// IMP=0x000000000000e8cb
- (id)initWithQueue:(id)arg1 locationManagerRoutine:(id)arg2;	// IMP=0x000000000000e70c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

