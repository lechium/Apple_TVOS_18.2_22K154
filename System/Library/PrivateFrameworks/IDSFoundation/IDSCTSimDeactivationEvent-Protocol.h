//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSString;

@protocol IDSCTSimDeactivationEvent <NSObject>
@property(readonly, nonatomic) long long timeOfEvent;
@property(readonly, nonatomic) NSString *rat;
@property(readonly, nonatomic) _Bool isNetworkInitiated;
@property(readonly, nonatomic) _Bool isRoaming;
@property(readonly, nonatomic) NSString *networkPlmn;
@property(readonly, nonatomic) NSString *reasonCode;
@property(readonly, nonatomic) unsigned long long sourceType;
@end

