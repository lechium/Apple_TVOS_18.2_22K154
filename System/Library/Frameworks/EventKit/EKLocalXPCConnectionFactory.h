//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CADTCCPermissionChecker;

__attribute__((visibility("hidden")))
@interface EKLocalXPCConnectionFactory : NSObject
{
    id <CADTCCPermissionChecker> _tccPermissionChecker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000225bd
- (id)tryNewConnectionWithExportedObject:(id)arg1 interruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000222ff
- (id)init;	// IMP=0x00000000000222bf
- (id)initWithTCCPermissionChecker:(id)arg1;	// IMP=0x0000000000022254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

