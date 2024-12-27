//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MathTypesetting/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol EQKitInspectable;

@protocol EQKitInspectable <NSObject>
@property(readonly, nonatomic) NSArray<EQKitInspectable> *inspectableChildren;
@property(readonly, nonatomic) double inspectableDepth;
@property(readonly, nonatomic) double inspectableHeight;
@property(readonly, nonatomic) double inspectableWidth;
@property(readonly, nonatomic) struct _NSRange inspectableNameRange;
@property(readonly, nonatomic) NSString *inspectableName;
@property(readonly, nonatomic) NSString *inspectableNameForIcon;
@end

