//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject
{
    NSString *_cachedHostname;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;	// 16 = 0x10
    struct MGNotificationTokenStruct *_hostNotificationToken;	// 24 = 0x18
}

+ (id)sharedClientInfo;	// IMP=0x0060000000175e65
- (void).cxx_destruct;	// IMP=0x0000000000176304
@property(readonly, nonatomic) NSString *hostname;
- (void)_refreshHostname;	// IMP=0x0000000000176171
- (void)dealloc;	// IMP=0x0000000000176137
- (id)initInternal;	// IMP=0x0000000000175f77
- (id)init;	// IMP=0x0000000000175eca

@end

