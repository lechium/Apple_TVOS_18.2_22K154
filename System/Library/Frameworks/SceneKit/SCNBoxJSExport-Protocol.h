//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@protocol SCNBoxJSExport <JSExport>
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double chamferRadius;
@property(nonatomic) double length;
@property(nonatomic) double height;
@property(nonatomic) double width;
@end

