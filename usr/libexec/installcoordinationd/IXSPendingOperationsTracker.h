//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSURL;
@protocol OS_dispatch_queue;

@interface IXSPendingOperationsTracker : NSObject
{
    NSURL *_sentinelPath;	// 8 = 0x8
    NSMutableSet *_pendingOperationIdentities;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000003bcc2
- (void).cxx_destruct;	// IMP=0x002000000003ced8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (id);	// IMP=0x001000000003cebd
@property(retain, nonatomic) NSMutableSet *pendingOperationIdentities; // @synthesize pendingOperationIdentities=_pendingOperationIdentities;
- (void)clearAllPendingOperations;	// IMP=0x001000000003cd17
@property(readonly, nonatomic) NSSet *pendingWorkIdentities;
- (void)endPendingOperationForIdentity:(id)arg1;	// IMP=0x001000000003c96e
- (void)beginPendingOperationForIdentity:(id)arg1;	// IMP=0x001000000003c744
- (void)_onQueue_writePendingWork;	// IMP=0x001000000003c456
- (id)initWithSentinelPathOverride:(id)arg1;	// IMP=0x001000000003c395
- (id)init;	// IMP=0x001000000003c381
- (void)_deserializePendingOperationIdentities;	// IMP=0x001000000003c10e
- (_Bool)_deserializeKeyedArchiveFromData:(id)arg1 atURL:(id)arg2;	// IMP=0x001000000003bfde
- (_Bool)_deserializePlistFormatFromData:(id)arg1 atURL:(id)arg2;	// IMP=0x001000000003bded
@property(readonly, nonatomic) NSURL *sentinelPath; // @synthesize sentinelPath=_sentinelPath;

@end

