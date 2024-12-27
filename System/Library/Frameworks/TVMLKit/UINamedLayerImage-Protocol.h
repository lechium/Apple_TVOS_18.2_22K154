//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

@protocol UINamedLayerImage <NSObject>
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<UINamedLayerContentProvider>",?,R,N

@property(nonatomic) _Bool fixedFrame;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (UIImage *)imageObj;
@end

