//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSURL, NSUUID;

@protocol AFClockItem <NSObject>
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *dismissedDate;
@property(readonly, copy, nonatomic) NSDate *firedDate;
@property(readonly, nonatomic) _Bool isFiring;
@property(readonly, nonatomic) NSURL *itemURL;
@property(readonly, nonatomic) NSUUID *itemID;
@end

