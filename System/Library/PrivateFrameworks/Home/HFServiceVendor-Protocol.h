//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryVendor-Protocol.h>

@class NSSet;

@protocol HFServiceVendor <HFAccessoryVendor>
@property(readonly, nonatomic) NSSet *services;

@optional
- (_Bool)shouldReduceOptionItemsForNotifyingCharacteristics;
@end

