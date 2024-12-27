//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSDCloudDataManagerDataSourceDelegate;

@interface AMSDCloudKitDataSource : NSObject
{
    id <AMSDCloudDataManagerDataSourceDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000efee
@property(nonatomic) __weak id <AMSDCloudDataManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_accountChanged:(id)arg1;	// IMP=0x001000000000ee60
- (void)handlePushNotification:(id)arg1;	// IMP=0x001000000000e930
- (id)containerWithContainerIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x001000000000e7df
@property(readonly, nonatomic) NSString *pushNotificationTopic;
- (void)dealloc;	// IMP=0x001000000000e74a
- (id)init;	// IMP=0x001000000000e6b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

