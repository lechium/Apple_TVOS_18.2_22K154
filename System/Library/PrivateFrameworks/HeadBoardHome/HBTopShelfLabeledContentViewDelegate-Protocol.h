//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardHome/NSObject-Protocol.h>

@class HBTopShelfLabeledContentView, NSIndexPath;

@protocol HBTopShelfLabeledContentViewDelegate <NSObject>

@optional
- (void)labeledContentView:(HBTopShelfLabeledContentView *)arg1 didPlayItemAtIndexPath:(NSIndexPath *)arg2;
- (void)labeledContentView:(HBTopShelfLabeledContentView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)labeledContentView:(HBTopShelfLabeledContentView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
@end

