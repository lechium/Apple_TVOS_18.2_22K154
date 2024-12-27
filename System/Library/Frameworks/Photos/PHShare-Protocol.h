//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSDate, NSURL;

@protocol PHShare <NSObject>
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) short publishState;
@property(readonly, nonatomic) unsigned short trashedState;
@property(readonly, nonatomic) short publicPermission;
@property(readonly, nonatomic) unsigned short status;
@end

