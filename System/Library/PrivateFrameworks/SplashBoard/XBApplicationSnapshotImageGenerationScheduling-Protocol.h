//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SplashBoard/NSObject-Protocol.h>

@protocol XBApplicationSnapshotImageGenerationScheduling <NSObject>
- (void)performImageDataGenerationAsyncAndWait:(void (^)(void))arg1 withHandler:(void (^)(void))arg2;
- (void)performImageDataGenerationAsync:(void (^)(void))arg1 withHandler:(void (^)(void))arg2;
- (void)performImageGenerationAsyncAndWait:(void (^)(void))arg1;
- (void)performImageGenerationAsync:(void (^)(void))arg1;
@end

