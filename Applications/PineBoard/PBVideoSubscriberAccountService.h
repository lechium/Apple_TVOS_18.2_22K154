//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBVideoSubscriberAccountService : NSObject
{
}

+ (id)_purchasesForAppInstallMetadata:(id)arg1 additionalInstalls:(id)arg2;	// IMP=0x002000000016c11a
+ (void)_setInstallPosition:(id)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x001000000016c08d
- (oneway void)installAppWithMetadata:(id)arg1;	// IMP=0x002000000016b639
- (void)invalidate;	// IMP=0x001000000016b5a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

