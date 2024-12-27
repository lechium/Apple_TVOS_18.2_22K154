//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class CHHapticParameterCurve, NSArray;

@protocol CHHapticPatternPlayer <NSObject>
@property _Bool isMuted;
- (_Bool)cancelAndReturnError:(id *)arg1;
- (_Bool)scheduleParameterCurve:(CHHapticParameterCurve *)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)sendParameters:(NSArray *)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;
@end

