//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary, NSError;

@interface _TtC10QOSToolkit22TVPlaybackErrorMessage : _TtCs12_SwiftObject
{
    MISSING_TYPE *config;	// 16 = 0x10
    MISSING_TYPE *logger;	// 56 = 0x38
    MISSING_TYPE *metricsRecorder;	// 72 = 0x48
    MISSING_TYPE *defaultAlert;	// 88 = 0x58
    MISSING_TYPE *service;	// 104 = 0x68
}

- (void)fetchLocalizedErrorMessageForItems:(NSDictionary *)arg1:(NSError *)arg2 completionHandler:(void (^)(QOSAlertMessageInternal *))arg3;	// IMP=0x000000000001f340
- (id)getLocalizedErrorMessageForItems:(id)arg1:(id)arg2;	// IMP=0x000000000001e8f0
@property(nonatomic, readonly) CDUnknownBlockType defaultAlert;
@property(nonatomic, readonly) CDUnknownBlockType metricsRecorder;
@property(nonatomic, readonly) CDUnknownBlockType logger;

@end

