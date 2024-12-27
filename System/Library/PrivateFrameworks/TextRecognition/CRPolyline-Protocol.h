//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSCopying-Protocol.h>
#import <TextRecognition/NSSecureCoding-Protocol.h>

@class NSArray;

@protocol CRPolyline <NSCopying, NSSecureCoding>
@property(readonly) unsigned long long pointCount;
@property(readonly) NSArray *pointValues;
@property(readonly) struct CGPath *path;
- (id)rotated180;
- (id)simplified;
- (void)enumeratePoints:(void (^)(unsigned long long, struct CGPoint, _Bool *))arg1;
@end

