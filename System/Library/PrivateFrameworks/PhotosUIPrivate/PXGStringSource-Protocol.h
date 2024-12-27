//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PXGLayoutContentSource-Protocol.h>

@class NSAttributedString, NSDictionary, NSString, NSStringDrawingContext, PXGLayout;

@protocol PXGStringSource <PXGLayoutContentSource>
- (NSAttributedString *)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSDictionary *)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSString *)stringAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;

@optional
- (struct CGSize)attributedStringBoundingSizeForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSStringDrawingContext *)drawingContextForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (struct UIEdgeInsets)paddingForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end

