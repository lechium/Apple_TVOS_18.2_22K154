//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CHHapticParameterAttributes;

@protocol CHHapticDeviceCapability
@property(readonly) _Bool supportsAudio;
@property(readonly) _Bool supportsHaptics;
- (id <CHHapticParameterAttributes>)attributesForDynamicParameter:(NSString *)arg1 error:(id *)arg2;
- (id <CHHapticParameterAttributes>)attributesForEventParameter:(NSString *)arg1 eventType:(NSString *)arg2 error:(id *)arg3;
@end

