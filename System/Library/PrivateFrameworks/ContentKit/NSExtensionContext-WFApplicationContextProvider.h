//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;
@protocol WFExtensionApplicationContextProviderDelegate;

@interface NSExtensionContext (WFApplicationContextProvider)
- (_Bool)shouldReverseLayoutDirection;	// IMP=0x00200000000fbe0f
- (id)applicationForWFApplicationContext:(id)arg1;	// IMP=0x00200000000fbe07
- (id)keyWindowForWFApplicationContext:(id)arg1;	// IMP=0x00200000000fbd66
@property(nonatomic) __weak id <WFExtensionApplicationContextProviderDelegate> extensionApplicationContextProviderDelegate;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;	// IMP=0x00200000000fbc29
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;	// IMP=0x00200000000fbb60
- (id)bundleForWFApplicationContext:(id)arg1;	// IMP=0x00200000000fba97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long userInterfaceStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(nonatomic) _Bool wfIdleTimerDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@end

