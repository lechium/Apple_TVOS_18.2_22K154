//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class NSArray;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

@protocol BLSHAssertionAttributeHandler <NSObject>
- (void)deactivateAttributes:(NSArray *)arg1 fromAssertion:(id <BLSAssertionServiceResponding>)arg2 forService:(id <BLSHAssertionAttributeHandlerService>)arg3;
- (void)activateAttributes:(NSArray *)arg1 fromAssertion:(id <BLSAssertionServiceResponding>)arg2 forService:(id <BLSHAssertionAttributeHandlerService>)arg3;
@end

