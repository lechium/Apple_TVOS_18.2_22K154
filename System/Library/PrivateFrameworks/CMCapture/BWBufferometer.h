//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BWBufferometer : NSObject
{
}

+ (long long)totalTrackedBuffersInFlight;	// IMP=0x0040000000029352
+ (long long)totalTrackedSizeInFlight;	// IMP=0x0040000000029342
+ (void)trackBuffer:(void *)arg1 trackedSize:(long long)arg2 tag:(id)arg3 bufferType:(id)arg4;	// IMP=0x0040000000029325
+ (void)trackBuffer:(void *)arg1 trackedSize:(long long)arg2;	// IMP=0x00400000000292f1
+ (void)initialize;	// IMP=0x0040000000029238

@end

