//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol PXDebugHierarchyElement
@property(readonly, nonatomic) unsigned long long parentIdentifier;
@property(readonly, nonatomic) unsigned long long identifier;
@property(readonly, nonatomic) _Bool canHaveChildren;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CGColor *backgroundColor;
@property(readonly, nonatomic) NSString *contentsGravity;
@property(readonly, nonatomic) struct CGRect contentsRect;
@property(readonly, nonatomic) struct CGImage *previewImage;
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double zPosition;
@property(readonly, nonatomic) struct CGRect frame;
@end

