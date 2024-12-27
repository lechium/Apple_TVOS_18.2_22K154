//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class GCPhysicalInputProfile, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GCDevice <NSObject>
@property(readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property(readonly, nonatomic) NSString *productCategory;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@end

