//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSError, PXActivity;

@protocol PXActivityActionDelegate <NSObject>
- (void)performActivity:(PXActivity *)arg1;
- (_Bool)canPerformWithActivityItems:(NSArray *)arg1 forActivity:(PXActivity *)arg2;

@optional
- (void)activity:(PXActivity *)arg1 didFinishWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

