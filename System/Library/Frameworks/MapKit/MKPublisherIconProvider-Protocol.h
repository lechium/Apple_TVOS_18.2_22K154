//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@protocol MKPublisherIconProvider
- (UIImage *)iconForPublisherNamed:(NSString *)arg1 usingId:(unsigned int)arg2 usingContentScale:(double)arg3 usingSizeGroup:(unsigned long long)arg4 isNightMode:(_Bool)arg5;
- (void)iconForPublisherNamed:(NSString *)arg1 usingId:(unsigned int)arg2 contentScale:(double)arg3 onCompletion:(void (^)(UIImage *))arg4;
@end

