//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class INIntentResponse, NSSet;

@protocol INIntentResponseObserver <NSObject>
- (void)intentResponseDidUpdate:(INIntentResponse *)arg1 withSerializedCacheItems:(NSSet *)arg2;

@optional
- (void)intentResponseDidUpdate:(INIntentResponse *)arg1;
@end

